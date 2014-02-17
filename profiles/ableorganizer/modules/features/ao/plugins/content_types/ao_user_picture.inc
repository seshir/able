<?php
/**
 * @file
 * Displays picture of a user and link to user page associated with current
 * contact, if any.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('User profile: user picture'),
  'description' => t('Picture of a user and link to user page associated with current contact, if any.'),
  'category' => t('AbleOrganizer'),
  'edit form' => 'ao_user_picture_settings_form',
  'render callback' => 'ao_user_picture_render',
  'admin info' => 'ao_user_picture_admin_info',
  'defaults' => array(
    'display_title' => 0,
  ),
  'all contexts' => TRUE,
);

/**
 * Admin info.
 */
function ao_user_picture_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('User profile: user picture');
  $block->content = t('Picture of a user and link to user page associated with current contact, if any.');

  return $block;
}

/**
 * Settings form.
 */
function ao_user_picture_settings_form($form, &$form_state) {
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
function ao_user_picture_settings_form_validate($form, &$form_state) {
}

/**
 * Submit handler for settings form.
 */
function ao_user_picture_settings_form_submit($form, &$form_state) {
  $form_state['conf']['display_title'] = $form_state['values']['display_title'];
}

/**
 * Render callback.
 */
function ao_user_picture_render($subtype, $conf, $panel_args, $context = NULL) {

  $content = '';
  $user = crm_core_user_sync_get_user_from_contact_id($panel_args[0]);
  
  $content = theme('user_picture', array('account' => $user, 'style_name' => 'user_picture'));
  
  if (!empty($user)) {
    // 	$content .= theme('username', array('account' => $user));
    $content .= '<div class="contact-user-info"><span>User account</span>: ' . l($user->name, 'user/' . $user->uid) . '</div>';    
  } else {
    $content .= '<div class="contact-user-info nouser">No user account associated with this contact.</div>';
  }

  $block = new stdClass();
  $block->title = empty($conf['display_title']) ? '' : t('User panel');
  $block->content = $content;

  return $block;
}
