<?php
/**
 * @file
 * ableorganizer_sample_volunteer_pages.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function ableorganizer_sample_volunteer_pages_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_volunteer_commitment_form';
  $crm_core_profile->label = 'Volunteer commitment form';
  $crm_core_profile->entities = array(
    'crm_core_contact' => array(
      'label' => 'CRM Core Contact',
      'status' => 1,
      'bundle' => 'individual',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 'contact_name',
          'field_ao_email_address' => 'field_ao_email_address',
          'field_ao_birthday' => 0,
          'field_ao_business_address' => 0,
          'field_ao_facebook' => 0,
          'field_ao_home_address' => 0,
          'field_ao_primary_telephone' => 0,
          'field_ao_twitter' => 0,
        ),
      ),
      'prepopulate' => 0,
      'prepopulate_type' => '',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'cmcv_volunteer_commitment',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_activity_notes' => 'field_activity_notes',
          'field_cmcv_reg_date' => 'field_cmcv_reg_date',
          'field_cmcv_signup_status' => 'field_cmcv_signup_status',
          'field_cmcv_source' => 'field_cmcv_source',
          'field_cmcv_vo_reference' => 'field_cmcv_vo_reference',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_cmcv_signup_role' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'weight' => '-42',
    ),
    'crm_core_contact_individual_contact_name_title' => array(
      'field_name' => 'contact_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_contact_individual_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-50',
    ),
    'crm_core_contact_individual_contact_name_middle' => array(
      'field_name' => 'contact_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_contact_individual_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_contact_individual_contact_name_generational' => array(
      'field_name' => 'contact_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-39',
    ),
    'crm_core_contact_individual_contact_name_credentials' => array(
      'field_name' => 'contact_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-38',
    ),
    'crm_core_contact_individual_field_ao_email_address' => array(
      'field_name' => 'field_ao_email_address',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Commitment for Volunteer Opportunity to "[current-page:title]"',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_reg_date' => array(
      'field_name' => 'field_cmcv_reg_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => 'now',
      'weight' => '-45',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_signup_status' => array(
      'field_name' => 'field_cmcv_signup_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => 'registered',
      'weight' => '-40',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_source' => array(
      'field_name' => 'field_cmcv_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => 'On-line registration',
      'weight' => '-42',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_vo_reference' => array(
      'field_name' => 'field_cmcv_vo_reference',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-44',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = 'volunteers/thank-you';
  $crm_core_profile->message = 'Thank you for your volunteer commitment!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1378725103;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_volunteer_commitment_form'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_volunteer_commitment_form_2';
  $crm_core_profile->label = 'Volunteer commitment form 2';
  $crm_core_profile->entities = array(
    'crm_core_contact' => array(
      'label' => 'CRM Core Contact',
      'status' => 1,
      'bundle' => 'individual',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 'contact_name',
          'field_ao_birthday' => 'field_ao_birthday',
          'field_ao_email_address' => 'field_ao_email_address',
          'field_ao_primary_telephone' => 'field_ao_primary_telephone',
          'field_ao_business_address' => 0,
          'field_ao_facebook' => 0,
          'field_ao_home_address' => 0,
          'field_ao_twitter' => 0,
        ),
      ),
      'prepopulate' => 0,
      'prepopulate_type' => '',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'cmcv_volunteer_commitment',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_activity_notes' => 'field_activity_notes',
          'field_cmcv_reg_date' => 'field_cmcv_reg_date',
          'field_cmcv_signup_role' => 'field_cmcv_signup_role',
          'field_cmcv_signup_status' => 'field_cmcv_signup_status',
          'field_cmcv_source' => 'field_cmcv_source',
          'field_cmcv_vo_reference' => 'field_cmcv_vo_reference',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'weight' => '-42',
    ),
    'crm_core_contact_individual_contact_name_title' => array(
      'field_name' => 'contact_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_contact_individual_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-50',
    ),
    'crm_core_contact_individual_contact_name_middle' => array(
      'field_name' => 'contact_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_contact_individual_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_contact_individual_contact_name_generational' => array(
      'field_name' => 'contact_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-37',
    ),
    'crm_core_contact_individual_contact_name_credentials' => array(
      'field_name' => 'contact_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-36',
    ),
    'crm_core_contact_individual_field_ao_birthday' => array(
      'field_name' => 'field_ao_birthday',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-38',
    ),
    'crm_core_contact_individual_field_ao_email_address' => array(
      'field_name' => 'field_ao_email_address',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_contact_individual_field_ao_primary_telephone' => array(
      'field_name' => 'field_ao_primary_telephone',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-34',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Commitment for Volunteer Opportunity to "[current-page:title]"',
      'weight' => '-44',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_reg_date' => array(
      'field_name' => 'field_cmcv_reg_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => 'now',
      'weight' => '-46',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_signup_role' => array(
      'field_name' => 'field_cmcv_signup_role',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-35',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_signup_status' => array(
      'field_name' => 'field_cmcv_signup_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => 'registered',
      'weight' => '-39',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_source' => array(
      'field_name' => 'field_cmcv_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => 'On-line registration',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcv_volunteer_commitment_field_cmcv_vo_reference' => array(
      'field_name' => 'field_cmcv_vo_reference',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcv_volunteer_commitment',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-45',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = 'volunteers/thank-you';
  $crm_core_profile->message = 'Thank you for your volunteer commitment!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1379536827;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_volunteer_commitment_form_2'] = $crm_core_profile;

  return $export;
}
