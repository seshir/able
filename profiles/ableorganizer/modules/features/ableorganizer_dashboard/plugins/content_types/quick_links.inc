<?php
/**
 * @file
 * Displays quick links widget to use at CRM Core Dashboard.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Quick links'),
  'description' => t('Displays quick links widget to use at CRM Core Dashboard.'),
  'category' => t('AbleOrganizer: Dashboard'),
  'edit form' => 'quick_links_settings_form',
  'render callback' => 'quick_links_render',
  'admin info' => 'quick_links_admin_info',
  'defaults' => array(
    'display_title' => 0,
  ),
  'all contexts' => TRUE,
);

/**
 * Admin info.
 */
function quick_links_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Quick links');
  $block->content = t('Displays quick links widget to use at CRM Core Dashboard.');

  return $block;
}

/**
 * Settings form.
 */
function quick_links_settings_form($form, &$form_state) {
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
 * Submit handler for settings form.
 */
function quick_links_settings_form_submit($form, &$form_state) {
  $form_state['conf']['display_title'] = $form_state['values']['display_title'];
}

/**
 * Render callback.
 */
function quick_links_render($subtype, $conf, $panel_args, $context = NULL) {
  $options = array('attributes' => array('class' => array('quick-link')));
  $content = '<div class="container-12-fluid">
<div class="grid-6">
<div class="btn btn-blue btn-simple">'
  . l(t('Add a Contact'), 'crm-core/contact/add') .
  '</div>
<strong>' . t('Create a new') . '</strong>';
  if (module_exists('crm_core_donation')) {
    $content .= l(t('Donation Page'), 'node/add/cmcd-page', $options);
    $content .= '<br />';
  }
  if (module_exists('crm_core_event')) {
    $content .= l(t('Event'), 'node/add/cmcev-event', $options);
    $content .= '<br />';
  }
  if (module_exists('crm_core_volunteer')) {
    $content .= l(t('Volunteer Opportunity'), 'node/add/cmcv-volunteer', $options);
    $content .= '<br />';
  }
  if (module_exists('crm_core_petition')) {
    $content .= l(t('Petition'), 'node/add/cmcp-petition', $options);
    $content .= '<br />';
  }
  $content .= '</div>
<div class="grid-6">
<div class="btn btn-blue btn-simple">'
    . l(t('Manage profiles'), 'crm-core/contact') .
    '</div>
  <strong>' . t('Record a New') . '</strong>';
  if (module_exists('crm_core_donation')) {
    $content .= l(t('Donation'), 'crm-core/contact/activity-add/cmcd_donation', $options);
    $content .= '<br />';
  }
  if (module_exists('crm_core_event')) {
    $content .= l(t('Event Registration'), 'crm-core/contact/activity-add/cmcev_event_registration', $options);
    $content .= '<br />';
  }
  if (module_exists('crm_core_volunteer')) {
    $content .= l(t('Volunteer Registration'), 'crm-core/contact/activity-add/cmcv_volunteer_commitment', $options);
    $content .= '<br />';
  }
  if (module_exists('crm_core_petition')) {
    $content .= l(t('Petition Signature'), 'crm-core/contact/activity-add/cmcp_petition_signature', $options);
    $content .= '<br />';
  }
  $content .= '</div>
  </div>
  <div class="clearfix" />
  ';

  $block = new stdClass();
  $block->title = empty($conf['display_title']) ? '' : t('Quick links');
  $block->content = $content;

  return $block;
}
