<?php
/**
 * @file
 * ao.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ao_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ao_5_latest_contact_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'AbleOrganizer 5 latest contact activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Activities';
  $handler->display->display_options['css_class'] = 'fancy-headers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any crm_core_contact entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="/crm-core/contact/[contact_id]/activity">View all</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['required'] = TRUE;
  /* Field: CRM Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
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
    'format' => 'short_full',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Activity: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: CRM Activity Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['activity_create_link'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: CRM Activity: Date of Signature */
  $handler->display->display_options['fields']['field_cmcp_received_date']['id'] = 'field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['table'] = 'field_data_field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['field'] = 'field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['label'] = '';
  $handler->display->display_options['fields']['field_cmcp_received_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcp_received_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcp_received_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcp_received_date']['hide_alter_empty'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcv_reg_date']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcev_reg_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcev_reg_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_cmcev_reg_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cmcp_received_date]
[field_cmcd_receive_date]
[field_cmcv_reg_date]
[field_cmcev_reg_date]';
  /* Field: CRM Activity: Donation Page */
  $handler->display->display_options['fields']['field_cmcd_page']['id'] = 'field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['table'] = 'field_data_field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['field'] = 'field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['label'] = '';
  $handler->display->display_options['fields']['field_cmcd_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcd_page']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcev_event']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcp_petition_page']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Target';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_cmcd_page]
[field_cmcev_event]
[field_cmcp_petition_page]
[field_cmcv_vo_reference]';
  /* Field: CRM Activity Type: Activity string */
  $handler->display->display_options['fields']['activity_string']['id'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['activity_string']['field'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['element_default_classes'] = FALSE;
  /* Sort criterion: CRM Activity: Date (field_activity_date) */
  $handler->display->display_options['sorts']['field_activity_date_value']['id'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['sorts']['field_activity_date_value']['field'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['order'] = 'DESC';
  /* Contextual filter: CRM Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['contact_id']['break_phrase'] = TRUE;
  $export['ao_5_latest_contact_activities'] = $view;

  $view = new view();
  $view->name = 'ao_contact_map_individual';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'AbleOrganizer Contact Map - Individual';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contact Location';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'ao_contact_individual';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No location values to display.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: CRM Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  /* Field: CRM Core Contact: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['label'] = '';
  $handler->display->display_options['fields']['field_ao_business_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: CRM Core Contact: Household */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
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
  /* Field: CRM Core Contact: Geofield */
  $handler->display->display_options['fields']['field_ao_geofield']['id'] = 'field_ao_geofield';
  $handler->display->display_options['fields']['field_ao_geofield']['table'] = 'field_data_field_ao_geofield';
  $handler->display->display_options['fields']['field_ao_geofield']['field'] = 'field_ao_geofield';
  $handler->display->display_options['fields']['field_ao_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_ao_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ao_geofield']['settings'] = array(
    'data' => 'full',
  );
  /* Contextual filter: CRM Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_ao_geofield',
    'other_lon' => 'field_ao_geofield',
    'wkt' => 'field_ao_geofield',
    'other_top' => 'contact_id',
    'other_right' => 'contact_id',
    'other_bottom' => 'contact_id',
    'other_left' => 'contact_id',
    'name_field' => 'contact_name',
    'description_field' => 'field_ao_business_address',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['label'] = '';
  $handler->display->display_options['fields']['field_ao_business_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: CRM Core Contact: Household */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
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
  /* Field: CRM Core Contact: Geofield */
  $handler->display->display_options['fields']['field_ao_geofield']['id'] = 'field_ao_geofield';
  $handler->display->display_options['fields']['field_ao_geofield']['table'] = 'field_data_field_ao_geofield';
  $handler->display->display_options['fields']['field_ao_geofield']['field'] = 'field_ao_geofield';
  $handler->display->display_options['fields']['field_ao_geofield']['label'] = '';
  $handler->display->display_options['fields']['field_ao_geofield']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_geofield']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_ao_geofield']['settings'] = array(
    'data' => 'full',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Contact Map - Individual';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'ao_contact_individual';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'map';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contacts on map';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Contact: Location Map';
  $handler->display->display_options['pane_description'] = 'Displays the location of a contact on a map. Used on contact pages. Uses contact id as an argument.';
  $handler->display->display_options['pane_category']['name'] = 'AbleOrganizer: Contacts';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_contact.contact-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Contact: Contact ID',
    ),
  );
  $export['ao_contact_map_individual'] = $view;

  $view = new view();
  $view->name = 'ao_crm_activities_by_contact';
  $view->description = 'List of activities of the contact';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'AO CRM Activities by contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['css_class'] = 'activity-listing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any crm_core_activity entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total activities for contact.</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no activities available. <a href="activity/add">Add one now</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_id']['hide_alter_empty'] = FALSE;
  /* Field: CRM Activity: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['label'] = '';
  $handler->display->display_options['fields']['field_activity_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: CRM Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
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
    'format' => 'short_full',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
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
  $handler->display->display_options['fields']['field_cmcv_reg_date']['element_default_classes'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcev_reg_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcev_reg_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_cmcev_reg_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Date Received';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_cmcp_received_date]
[field_cmcd_receive_date]
[field_cmcv_reg_date]
[field_cmcev_reg_date]';
  $handler->display->display_options['fields']['nothing']['empty'] = '[field_activity_date]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]/edit?destination=crm-core/contact/[contact_id]/activity';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['nothing_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_3']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_3']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]/delete?destination=crm-core/contact/[contact_id]/activity';
  /* Field: CRM Core Activity: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: CRM Activity Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Activity Type';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '[nothing_1] [nothing_2] [nothing_3]';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_4']['element_default_classes'] = FALSE;
  /* Field: CRM Activity: Donation Page */
  $handler->display->display_options['fields']['field_cmcd_page']['id'] = 'field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['table'] = 'field_data_field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['field'] = 'field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['label'] = '';
  $handler->display->display_options['fields']['field_cmcd_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcd_page']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcev_event']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcp_petition_page']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Target';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '[field_cmcd_page]
[field_cmcev_event]
[field_cmcp_petition_page]
[field_cmcv_vo_reference]';
  $handler->display->display_options['fields']['nothing_5']['element_default_classes'] = FALSE;
  /* Field: CRM Activity Type: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = '';
  $handler->display->display_options['fields']['type']['alter']['activity_create_link'] = 0;
  $handler->display->display_options['fields']['type']['element_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_type'] = '0';
  $handler->display->display_options['fields']['type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['type']['element_default_classes'] = FALSE;
  /* Field: CRM Activity Type: Activity string */
  $handler->display->display_options['fields']['activity_string']['id'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['activity_string']['field'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['label'] = '';
  $handler->display->display_options['fields']['activity_string']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_string']['element_default_classes'] = FALSE;
  /* Contextual filter: CRM Activity: Participants (field_activity_participants) */
  $handler->display->display_options['arguments']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['arguments']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['field_activity_participants_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_activity_participants_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_activity_participants_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_activity_participants_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_activity_participants_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Filter by:';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'crm-core/contact/%/activity';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Activities';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['ao_crm_activities_by_contact'] = $view;

  $view = new view();
  $view->name = 'ao_crm_core_contacts';
  $view->description = 'AbleOrganizer list of all contacts in the system';
  $view->tag = 'AbleOrganizer';
  $view->base_table = 'crm_core_contact';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Contacts';
  $handler->display->display_options['css_class'] = 'fancy-headers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any crm_core_contact entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'contact_id' => 'contact_id',
    'contact_name' => 'contact_name',
    'nothing_4' => 'nothing_4',
    'field_ao_business_address' => 'field_ao_business_address',
    'field_ao_primary_telephone' => 'field_ao_primary_telephone',
    'field_ao_email_address' => 'field_ao_email_address',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
    'nothing_3' => 'nothing_3',
  );
  $handler->display->display_options['style_options']['default'] = 'contact_name';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_4' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_business_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_primary_telephone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_email_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'List of contacts';
  /* Header: Results summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Results summary';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total contacts.</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no contacts available. <a href="contact/add">Add one now</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Bulk operations: CRM Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete Contact',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_join_into_household_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_merge_contacts_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Edit Contacts',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Send Email Message',
    ),
    'action::crm_core_contact_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Send e-mail message',
    ),
  );
  /* Field: CRM Contact: Contact Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['link_to_contact_type'] = 0;
  $handler->display->display_options['fields']['type_1']['machine_name'] = 1;
  /* Field: Contact Icon */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Contact Icon';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<div class="ao_contact_icon ao_contact_[type_1]"><span></span></div>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: CRM Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Household */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['text'] = '<div class="contact-icon"></div> [contact_name]';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['element_class'] = 'field-object';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'family';
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
  /* Field: CRM Core Contact: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['label'] = 'Address';
  $handler->display->display_options['fields']['field_ao_business_address']['empty'] = '---';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'locality';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: CRM Core Contact: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone']['id'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['empty'] = '---';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Field: CRM Core Contact: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['empty'] = '---';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/view';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[contact_id]/edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'crm-core/contact/[contact_id]/delete';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="btn btn-blue btn-dark btn-simple">[nothing]</div> <div class="btn btn-green btn-dark btn-simple">[nothing_1]</div> <div class="btn btn-red btn-dark btn-simple">[nothing_2]</div>';
  /* Sort criterion: CRM Core Contact: Household (contact_name:title) */
  $handler->display->display_options['sorts']['contact_name_title']['id'] = 'contact_name_title';
  $handler->display->display_options['sorts']['contact_name_title']['table'] = 'field_data_contact_name';
  $handler->display->display_options['sorts']['contact_name_title']['field'] = 'contact_name_title';
  /* Filter criterion: CRM Contact Types: Disabled contact type */
  $handler->display->display_options['filters']['disabled']['id'] = 'disabled';
  $handler->display->display_options['filters']['disabled']['table'] = 'crm_core_contact_type';
  $handler->display->display_options['filters']['disabled']['field'] = 'disabled';
  $handler->display->display_options['filters']['disabled']['value']['value'] = '0';
  /* Filter criterion: CRM Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Contact Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: CRM Core Contact: Household */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Contact Name';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'crm-core/contact';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Contacts';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['ao_crm_core_contacts'] = $view;

  $view = new view();
  $view->name = 'ao_user_profile_latest_activities';
  $view->description = 'List of the latest activities for a user';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'AbleOrganizer User Profile - Latest Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Activities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Not quite yet...';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Contact Relationship */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['ui_name'] = 'Contact Relationship';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['label'] = 'Contact Relationship';
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
  /* Field: CRM Activity: Donation Page */
  $handler->display->display_options['fields']['field_cmcd_page']['id'] = 'field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['table'] = 'field_data_field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['field'] = 'field_cmcd_page';
  $handler->display->display_options['fields']['field_cmcd_page']['label'] = '';
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
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_cmcv_vo_reference']['settings'] = array(
    'link' => 1,
  );
  /* Field: CRM Activity: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['label'] = '';
  $handler->display->display_options['fields']['field_activity_date']['element_type'] = '0';
  $handler->display->display_options['fields']['field_activity_date']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_activity_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_date']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_activity_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_activity_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Sort criterion: CRM Activity: Date (field_activity_date) */
  $handler->display->display_options['sorts']['field_activity_date_value']['id'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['sorts']['field_activity_date_value']['field'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['order'] = 'DESC';
  /* Contextual filter: CRM Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'User profile: latest activities';
  $handler->display->display_options['pane_description'] = 'A list of recent activities for the selected user.';
  $handler->display->display_options['pane_category']['name'] = 'AbleOrganizer';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Contact: Contact ID',
    ),
  );
  $export['ao_user_profile_latest_activities'] = $view;

  return $export;
}
