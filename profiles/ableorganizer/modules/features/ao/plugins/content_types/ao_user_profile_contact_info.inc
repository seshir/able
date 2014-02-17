<?php
/**
 * @file
 * Displays contact 5 recent activities.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('User profile: contact information'),
  'description' => t('Displays contact information for the currently selected user.'),
  'category' => t('AbleOrganizer'),
  'edit form' => 'ao_up_contact_info_form',
  'render callback' => 'ao_up_contact_info_render',
  'admin info' => 'ao_up_contact_info_admin_info',
  'defaults' => array(
    'display_title' => 1,
  ),
  'all contexts' => TRUE,
);

/**
 * Admin info.
 */
function ao_up_contact_info_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('User profile: contact information');
  $block->content = t('Displays contact information for the currently selected user.');

  return $block;
}

/**
 * Settings form.
 */
function ao_up_contact_info_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['display_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display block title'),
    '#description' => t('Check this box to display block title.'),
    '#default_value' => !empty($conf['display_title']) ? 1 : 0,
    '#return_value' => 1,
  );

  return $form;
}

/**
 * Validate handler for settings form.
 */
function ao_up_contact_info_form_validate($form, &$form_state) {
}

/**
 * Submit handler for settings form.
 */
function ao_up_contact_info_form_submit($form, &$form_state) {
  $form_state['conf']['display_title'] = $form_state['values']['display_title'];
}

/**
 * Render callback.
 */
function ao_up_contact_info_render($subtype, $conf, $panel_args, $context = NULL) {
	
	global $user;
	
	// you have to be an admin or have permission to view contacts to see this port
	// or you have the be the user associated with the contact
	if(!user_access('View any contact of any type') || $panel_args[0] !== $user->uid){
		return;
	}
	
  $contact_id = $panel_args[0];
  $contact = crm_core_contact_load($contact_id);
  
  // for rendering addressfields
  $handlers = array('address' => 'address'); //There are other formats, but this one will output the mailing address.
  $context = array('mode' => 'render');
  
  // display some fields for the currently selected contact
  $wrapper = entity_metadata_wrapper('crm_core_contact', $contact);
  
  //Now generate the render array, where $addressfield_object is your addressfield, of course
  $home_address = addressfield_generate($wrapper->field_ao_home_address->value(), $handlers, $context);
  $biz_address = addressfield_generate($wrapper->field_ao_business_address->value(), $handlers, $context);
  
  // set some values
  $name 		= $wrapper->contact_name->given->value() . ' ' . $wrapper->contact_name->family->value();
	$bday = format_date($wrapper->field_ao_birthday->value(), 'short');
  $email	= $wrapper->field_ao_email_address->value();
  $facebook	= $wrapper->field_ao_facebook->value();
  $twitter 	= $wrapper->field_ao_twitter->value();
  
  $haddr = drupal_render($home_address);
  $baddr = drupal_render($biz_address);
  
  $content = '<div class="up_info_section">';
  if($name !== '' && $name !== NULL){
  	$content .= '<div class="up_info_item"><div class="up_info_label">Name:</div><div class="up_info_data">' . $name . '</div></div>';
  }
  if($haddr !== '' && $baddr !== NULL){
  	$content .= '<div class="up_info_item"><div class="up_info_label">Home address:</div><div class="up_info_data">' . $haddr . '</div></div>';
  }
  if($baddr !== '' && $baddr !== NULL){
  	$content .= '<div class="up_info_item"><div class="up_info_label">Home address:</div><div class="up_info_data">' . $baddr . '</div></div>';
  }
	if($wrapper->field_ao_birthday->value() !== NULL  && $bday !== ''){
		$content .= '<div class="up_info_item"><div class="up_info_label">Birthday:</div><div class="up_info_data">' . $bday . '</div></div>';
	}
	if($email !== '' && $email !== NULL){
		$content .= '<div class="up_info_item"><div class="up_info_label">Email address:</div><div class="up_info_data">' . $wrapper->field_ao_email_address->value() . '</div></div>';
	}
	if($facebook !== '' && $facebook !== NULL){
		$content .= '<div class="up_info_item"><div class="up_info_label">Facebook:</div><div class="up_info_data">' . $wrapper->field_ao_facebook->value() . '</div></div>';
	}
	if($twitter !== '' && $twitter !== NULL){
		$content .= '<div class="up_info_item"><div class="up_info_label">Twitter:</div><div class="up_info_data">' . $wrapper->field_ao_twitter->value() . '</div></div>';
	}
	
	$content .= '</div>';

  $block = new stdClass();
  $block->title = empty($conf['display_title']) ? '' : t('Personal Information');
  $block->content = $content;

  return $block;
}
