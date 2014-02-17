<?php

/**
 * Implements preprocessing functions for regions.
 */
function ablestarter_alpha_preprocess_region(&$vars) {

  $theme = alpha_get_theme();

  // Settings for the left id region.
  if ($vars['region'] == 'identity_left') {
    $text = t("< Back to Your Site");
    $path = '<front>';
    $vars['back_link'] = l($text, $path);
  }

  // Settings for the right id region.
  if ($vars['region'] == 'identity_right') {
    $contact = crm_core_user_sync_get_contact_from_uid($GLOBALS['user']->uid);
    if (isset($contact)) {
      $name = check_plain($contact->label());
    }
    else {
      $name = check_plain($GLOBALS['user']->name);
    }
    $settings_text = "<span></span>" . t("Settings");
    $user_text = "<span></span>" . t("Logged in as @name", array('@name' => $name));
    $options = array(
      'attributes' => array('class' => array('ao_settings')),
      'html' => TRUE,
    );
    $uoptions = array(
      'attributes' => array('class' => array('ao_logged_in')),
      'html' => TRUE,
    );

    $vars['settings'] = l($settings_text, 'admin/config/crm-core', $options);
    $vars['current_user'] = l($user_text, 'user', $uoptions);
    $vars['logout'] = l(t('Log Out'), 'user/logout');
  }

  if ($vars['region'] == 'branding') {
    $vars['main_menu'] = $theme->page['main_menu'];
    $vars['secondary_menu'] = $theme->page['secondary_menu'];
  }

  if ($vars['region'] == 'menu') {

    $vars['breadcrumb'] = $theme->page['breadcrumb'];
    $vars['title_prefix'] = $theme->page['title_prefix'];
    $vars['title'] = $theme->page['title'];
    $vars['title_suffix'] = $theme->page['title_suffix'];
    $vars['tabs'] = $theme->page['tabs'];
    $vars['action_links'] = $theme->page['action_links'];
    $vars['title_hidden'] = $theme->page['title_hidden'];
    $vars['feed_icons'] = $theme->page['feed_icons'];
  }
}
