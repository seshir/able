<?php
/**
 * @file
 * Displays contact 5 recent activities.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Contact: 5 recent activities'),
  'description' => t('Displays 5 recent activities for the current contact.'),
  'category' => t('AbleOrganizer'),
  'edit form' => 'ao_5_recent_activities_form',
  'render callback' => 'ao_5_recent_activities_render',
  'admin info' => 'ao_5_recent_activities_admin_info',
  'defaults' => array(
    'display_title' => 1,
  ),
  'all contexts' => TRUE,
);

/**
 * Admin info.
 */
function ao_5_recent_activities_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Contact: 5 recent activities');
  $block->content = t('Displays 5 recent activities for the current contact.');

  return $block;
}

/**
 * Settings form.
 */
function ao_5_recent_activities_form($form, &$form_state) {
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
function ao_5_recent_activities_form_validate($form, &$form_state) {
}

/**
 * Submit handler for settings form.
 */
function ao_5_recent_activities_form_submit($form, &$form_state) {
  $form_state['conf']['display_title'] = $form_state['values']['display_title'];
}

/**
 * Render callback.
 */
function ao_5_recent_activities_render($subtype, $conf, $panel_args, $context = NULL) {
  $contact_id = $panel_args[0];
  $contact = crm_core_contact_load($contact_id);
  switch ($contact->type) {
    case 'organization':
      $relation_name = 'crm_employee';
      $ids = _ableorganizer_contact_get_group_member_ids($contact_id, $relation_name);
      $ids[] = $contact_id;
      break;

    case 'household':
      $relation_name = 'crm_member';
      $ids = _ableorganizer_contact_get_group_member_ids($contact_id, $relation_name);
      $ids[] = $contact_id;
      break;

    default:
      $ids = array($panel_args[0]);
      break;
  }

  $block = new stdClass();
  $block->title = empty($conf['display_title']) ? '' : t('Recent activities');
  $block->content = views_embed_view('ao_5_latest_contact_activities', 'default', implode(',', $ids));

  return $block;
}
