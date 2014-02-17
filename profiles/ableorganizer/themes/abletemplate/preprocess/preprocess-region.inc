<?php 
function abletemplate_alpha_preprocess_region(&$vars) {
  // custom functionality here
  $theme = alpha_get_theme();
  
  if($vars['region'] == 'branding'){
  	$vars['main_menu'] = $theme->page['main_menu'];
  	$vars['nav_menu'] = abletemplate_alpha_login_or_menu();
  }
  
}

/**
 * Creates the navigation menu at the top of the page.
 * Generates links to log in when someone is not logged in, and an administrative menu when someone is logged in.
 */
function abletemplate_alpha_login_or_menu(){
	
	global $user;
	
	if ($user->uid !== 0) {
	
		// Load the identity menu.
		$menu = menu_navigation_links('menu-ao-navigation-items');
		$identity_menu = theme('links__menu-ao-navigation-items', array('links' => $menu));

    $contact = crm_core_user_sync_get_contact_from_uid($user->uid);
    $name = empty($contact) ? $user->name : $contact->contact_name[LANGUAGE_NONE][0]['given'];

    $variables['welcome_text'] = t('Welcome, !user!', array(
      '!user' => l($name, 'user/' . $user->uid)
    )) . ' ' . l('Log out', 'user/logout');
				
		
		// Identity block for a logged in user.
		$content = <<<UID
	Welcome, $name
	$identity_menu
UID;
	}
	else {
		// add login links
		$content = l('Login / Register', 'user');
	}  
  
	return $content;
}