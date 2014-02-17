<?php
/**
 * @file
 * ableorganizer_dashboard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ableorganizer_dashboard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ao_dashboard_act_stream';
  $view->description = 'This is a dashboard displaying recent activities in the system';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'AbleOrganizer Dashboard Activity Stream';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Activity';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view crm dashboard';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Contacts Relationship */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['ui_name'] = 'Contacts Relationship';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['label'] = 'Contacts Relationship';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  /* Field: CRM Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Household */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['element_type'] = '0';
  $handler->display->display_options['fields']['contact_name']['element_label_type'] = '0';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['contact_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['element_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['type']['machine_name'] = TRUE;
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'time ago';
  /* Field: CRM Activity: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_activity_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_activity_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_activity_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_activity_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_activity_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: CRM Activity: Donation Page */
  $handler->display->display_options['fields']['field_cmcd_page']['id'] = 'field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['table'] = 'field_data_field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['field'] = 'field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['label'] = '';
  $handler->display->display_options['fields']['field_cmcd_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcd_page']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cmcd_page']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_cmcd_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcd_page']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cmcd_page']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcd_page']['settings'] = array(
    'link' => 1,
  );
  /* Field: CRM Activity: Event */
  $handler->display->display_options['fields']['field_cmcev_event']['id'] = 'field_cmcev_event';
  $handler->display->display_options['fields']['field_cmcev_event']['table'] = 'field_data_field_cmcev_event';
  $handler->display->display_options['fields']['field_cmcev_event']['field'] = 'field_cmcev_event';
  $handler->display->display_options['fields']['field_cmcev_event']['label'] = '';
  $handler->display->display_options['fields']['field_cmcev_event']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcev_event']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cmcev_event']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_cmcev_event']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcev_event']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cmcev_event']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcev_event']['settings'] = array(
    'link' => 1,
  );
  /* Field: CRM Activity: Petition */
  $handler->display->display_options['fields']['field_cmcp_petition_page']['id'] = 'field_cmcp_petition_page';
  $handler->display->display_options['fields']['field_cmcp_petition_page']['table'] = 'field_data_field_cmcp_petition_page';
  $handler->display->display_options['fields']['field_cmcp_petition_page']['field'] = 'field_cmcp_petition_page';
  $handler->display->display_options['fields']['field_cmcp_petition_page']['label'] = '';
  $handler->display->display_options['fields']['field_cmcp_petition_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcp_petition_page']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cmcp_petition_page']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_cmcp_petition_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcp_petition_page']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cmcp_petition_page']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcp_petition_page']['settings'] = array(
    'link' => 1,
  );
  /* Field: CRM Activity: Volunteer Opportunity */
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['id'] = 'field_cmcv_vo_reference';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['table'] = 'field_data_field_cmcv_vo_reference';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['field'] = 'field_cmcv_vo_reference';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['label'] = '';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Target';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cmcd_page]
[field_cmcev_event]
[field_cmcp_petition_page]
[field_cmcv_vo_reference]
';
  /* Field: CRM Activity: Date of Signature */
  $handler->display->display_options['fields']['field_cmcp_received_date']['id'] = 'field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['table'] = 'field_data_field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['field'] = 'field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['label'] = '';
  $handler->display->display_options['fields']['field_cmcp_received_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcp_received_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcp_received_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcp_received_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_cmcp_received_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: CRM Activity: Receive Date */
  $handler->display->display_options['fields']['field_cmcd_receive_date']['id'] = 'field_cmcd_receive_date';
  $handler->display->display_options['fields']['field_cmcd_receive_date']['table'] = 'field_data_field_cmcd_receive_date';
  $handler->display->display_options['fields']['field_cmcd_receive_date']['field'] = 'field_cmcd_receive_date';
  $handler->display->display_options['fields']['field_cmcd_receive_date']['label'] = '';
  $handler->display->display_options['fields']['field_cmcd_receive_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcd_receive_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcd_receive_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcd_receive_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_cmcd_receive_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: CRM Activity: Registration Date */
  $handler->display->display_options['fields']['field_cmcv_reg_date']['id'] = 'field_cmcv_reg_date';
  $handler->display->display_options['fields']['field_cmcv_reg_date']['table'] = 'field_data_field_cmcv_reg_date';
  $handler->display->display_options['fields']['field_cmcv_reg_date']['field'] = 'field_cmcv_reg_date';
  $handler->display->display_options['fields']['field_cmcv_reg_date']['label'] = '';
  $handler->display->display_options['fields']['field_cmcv_reg_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcv_reg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_reg_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_cmcv_reg_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: CRM Activity: Registration Date */
  $handler->display->display_options['fields']['field_cmcev_reg_date']['id'] = 'field_cmcev_reg_date';
  $handler->display->display_options['fields']['field_cmcev_reg_date']['table'] = 'field_data_field_cmcev_reg_date';
  $handler->display->display_options['fields']['field_cmcev_reg_date']['field'] = 'field_cmcev_reg_date';
  $handler->display->display_options['fields']['field_cmcev_reg_date']['label'] = '';
  $handler->display->display_options['fields']['field_cmcev_reg_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcev_reg_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcev_reg_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_cmcev_reg_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Date';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_cmcp_received_date]
[field_cmcd_receive_date]
[field_cmcv_reg_date]
[field_cmcev_reg_date]
';
  $handler->display->display_options['fields']['nothing_1']['empty'] = '[field_activity_date]';
  /* Field: CRM Activity Type: Activity string */
  $handler->display->display_options['fields']['activity_string']['id'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['activity_string']['field'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['label'] = '';
  $handler->display->display_options['fields']['activity_string']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_string']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]/edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[nothing_2]
[nothing_3]';
  /* Sort criterion: CRM Activity: Date (field_activity_date) */
  $handler->display->display_options['sorts']['field_activity_date_value']['id'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['sorts']['field_activity_date_value']['field'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['order'] = 'DESC';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'AbleOrganizer';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['ao_dashboard_act_stream'] = $view;

  return $export;
}
