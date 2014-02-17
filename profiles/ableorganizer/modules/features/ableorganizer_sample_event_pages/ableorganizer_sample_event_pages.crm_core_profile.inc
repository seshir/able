<?php
/**
 * @file
 * ableorganizer_sample_event_pages.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function ableorganizer_sample_event_pages_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_cmcev_simple_many_form';
  $crm_core_profile->label = 'Event Many Form';
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
          'field_ao_geofield' => 0,
        ),
      ),
      'prepopulate' => 0,
      'prepopulate_type' => '',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'cmcev_event_registration',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_cmcev_amount' => 'field_cmcev_amount',
          'field_cmcev_event' => 'field_cmcev_event',
          'field_cmcev_order' => 'field_cmcev_order',
          'field_cmcev_reg_date' => 'field_cmcev_reg_date',
          'field_cmcev_source' => 'field_cmcev_source',
          'field_cmcev_status' => 'field_cmcev_status',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
          'field_cmcev_public' => 0,
        ),
      ),
    ),
    'commerce_product' => array(
      'label' => 'Commerce Profile',
      'status' => 1,
      'bundle' => 'commerce_product',
      'fields_container' => array(
        'fields' => array(
          'commerce_items_cart' => 'commerce_items_cart',
          'commerce_items_customer_billing' => 'commerce_items_customer_billing',
          'commerce_items_payment' => 'commerce_items_payment',
          'commerce_items_amount_single' => 0,
        ),
      ),
      'order_status' => 'completed',
      'commerce_items_cart_settings' => array(
        'line_items' => 'Standard|50
Family|200
Corporate|1000',
        'quantities' => 0,
      ),
      'commerce_items_payment_settings' => array(
        'payment_processors' => array(
          'commerce_payment_example|commerce_payment_commerce_payment_example' => 'commerce_payment_example|commerce_payment_commerce_payment_example',
        ),
        'name_fields' => array(
          'crm_core_contact_individual_contact_name_given' => 'crm_core_contact_individual_contact_name_given',
          'crm_core_contact_individual_contact_name_family' => 'crm_core_contact_individual_contact_name_family',
        ),
        'commerce_billing_address_field' => 'commerce_items_customer_billing',
      ),
      'product_type' => 'event_registration',
    ),
    'crm_core_petition' => array(
      'label' => 'CRM Core Petition',
      'status' => 0,
      'bundle' => 'crm_core_petition',
      'fields_container' => array(
        'fields' => array(
          'signatures_counter' => 0,
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
      'weight' => '-36',
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
      'weight' => '-37',
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
      'weight' => '-35',
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
      'weight' => '-34',
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
      'weight' => '-33',
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
    'crm_core_activity_cmcev_event_registration_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => 'On-line Event Registration',
      'weight' => '-39',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_amount' => array(
      'field_name' => 'field_cmcev_amount',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => '[commerce-order:commerce-order-total:amount_decimal]',
      'weight' => '-40',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_event' => array(
      'field_name' => 'field_cmcev_event',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-41',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_order' => array(
      'field_name' => 'field_cmcev_order',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => '[commerce-order:order-id]',
      'weight' => '-38',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_reg_date' => array(
      'field_name' => 'field_cmcev_reg_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_source' => array(
      'field_name' => 'field_cmcev_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Online Registration',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_status' => array(
      'field_name' => 'field_cmcev_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Registered',
      'weight' => '-44',
    ),
    'commerce_product_commerce_product_commerce_items_cart' => array(
      'field_name' => 'commerce_items_cart',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-47',
    ),
    'commerce_product_commerce_product_commerce_items_customer_billing' => array(
      'field_name' => 'commerce_items_customer_billing',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-46',
    ),
    'commerce_product_commerce_product_commerce_items_payment' => array(
      'field_name' => 'commerce_items_payment',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-45',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = 'events/thank-you';
  $crm_core_profile->message = 'Thank you for registration!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1378138244;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_cmcev_simple_many_form'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_cmcev_simple_quantity_form';
  $crm_core_profile->label = 'Event Quantity Form';
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
      'bundle' => 'cmcev_event_registration',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_cmcev_amount' => 'field_cmcev_amount',
          'field_cmcev_event' => 'field_cmcev_event',
          'field_cmcev_order' => 'field_cmcev_order',
          'field_cmcev_reg_date' => 'field_cmcev_reg_date',
          'field_cmcev_source' => 'field_cmcev_source',
          'field_cmcev_status' => 'field_cmcev_status',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
          'field_cmcev_public' => 0,
        ),
      ),
    ),
    'commerce_product' => array(
      'label' => 'Commerce Profile',
      'status' => 1,
      'bundle' => 'commerce_product',
      'fields_container' => array(
        'fields' => array(
          'commerce_items_cart' => 'commerce_items_cart',
          'commerce_items_customer_billing' => 'commerce_items_customer_billing',
          'commerce_items_payment' => 'commerce_items_payment',
          'commerce_items_amount_single' => 0,
        ),
      ),
      'order_status' => 'completed',
      'commerce_items_cart_settings' => array(
        'line_items' => 'Standard|50
Family|200
Corporate|1000',
        'quantities' => 1,
      ),
      'commerce_items_payment_settings' => array(
        'payment_processors' => array(
          'commerce_payment_example|commerce_payment_commerce_payment_example' => 'commerce_payment_example|commerce_payment_commerce_payment_example',
        ),
        'name_fields' => array(
          'crm_core_contact_individual_contact_name_given' => 'crm_core_contact_individual_contact_name_given',
          'crm_core_contact_individual_contact_name_family' => 'crm_core_contact_individual_contact_name_family',
        ),
        'commerce_billing_address_field' => 'commerce_items_customer_billing',
      ),
      'product_type' => 'event_registration',
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
      'weight' => '-38',
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
      'weight' => '-40',
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
      'weight' => '-37',
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
      'weight' => '-36',
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
      'weight' => '-35',
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
    'crm_core_activity_cmcev_event_registration_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => 'On-line Event Registration',
      'weight' => '-39',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_amount' => array(
      'field_name' => 'field_cmcev_amount',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => '[commerce-order:commerce-order-total:amount_decimal]',
      'weight' => '-41',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_event' => array(
      'field_name' => 'field_cmcev_event',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-42',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_order' => array(
      'field_name' => 'field_cmcev_order',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => '[commerce-order:order-id]',
      'weight' => '40',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_reg_date' => array(
      'field_name' => 'field_cmcev_reg_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_source' => array(
      'field_name' => 'field_cmcev_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Online Registration',
      'weight' => '-44',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_status' => array(
      'field_name' => 'field_cmcev_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Registered',
      'weight' => '-45',
    ),
    'commerce_product_commerce_product_commerce_items_cart' => array(
      'field_name' => 'commerce_items_cart',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-47',
    ),
    'commerce_product_commerce_product_commerce_items_customer_billing' => array(
      'field_name' => 'commerce_items_customer_billing',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-46',
    ),
    'commerce_product_commerce_product_commerce_items_payment' => array(
      'field_name' => 'commerce_items_payment',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-45',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = 'events/thank-you';
  $crm_core_profile->message = 'Thank you for registration!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1378138529;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_cmcev_simple_quantity_form'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_cmcev_simple_reg_form';
  $crm_core_profile->label = 'Simple Event Reg Form';
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
          'field_ao_geofield' => 0,
        ),
      ),
      'prepopulate' => 0,
      'prepopulate_type' => '',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'cmcev_event_registration',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_activity_notes' => 'field_activity_notes',
          'field_cmcev_event' => 'field_cmcev_event',
          'field_cmcev_reg_date' => 'field_cmcev_reg_date',
          'field_cmcev_source' => 'field_cmcev_source',
          'field_cmcev_status' => 'field_cmcev_status',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_cmcev_amount' => 0,
          'field_cmcev_order' => 0,
          'field_cmcev_public' => 0,
        ),
      ),
    ),
    'commerce_product' => array(
      'label' => 'Commerce Profile',
      'status' => 0,
      'bundle' => 'commerce_product',
      'fields_container' => array(
        'fields' => array(
          'commerce_items_amount_single' => 0,
          'commerce_items_cart' => 0,
          'commerce_items_customer_billing' => 0,
          'commerce_items_payment' => 0,
        ),
      ),
    ),
    'crm_core_petition' => array(
      'label' => 'CRM Core Petition',
      'status' => 0,
      'bundle' => 'crm_core_petition',
      'fields_container' => array(
        'fields' => array(
          'signatures_counter' => 0,
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
      'weight' => '-41',
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
      'weight' => '-40',
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
      'weight' => '-39',
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
      'weight' => '-38',
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
      'weight' => '-37',
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
    'crm_core_activity_cmcev_event_registration_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Event Registration',
      'weight' => '-42',
    ),
    'crm_core_activity_cmcev_event_registration_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_event' => array(
      'field_name' => 'field_cmcev_event',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-43',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_reg_date' => array(
      'field_name' => 'field_cmcev_reg_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-44',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_source' => array(
      'field_name' => 'field_cmcev_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Online Registration',
      'weight' => '-45',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_status' => array(
      'field_name' => 'field_cmcev_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Registered',
      'weight' => '-46',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = 'events/thank-you';
  $crm_core_profile->message = 'Thank you for registration!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1377939967;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_cmcev_simple_reg_form'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_cmcev_simple_single_form';
  $crm_core_profile->label = 'Event Single Form';
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
      'bundle' => 'cmcev_event_registration',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_cmcev_amount' => 'field_cmcev_amount',
          'field_cmcev_event' => 'field_cmcev_event',
          'field_cmcev_order' => 'field_cmcev_order',
          'field_cmcev_reg_date' => 'field_cmcev_reg_date',
          'field_cmcev_source' => 'field_cmcev_source',
          'field_cmcev_status' => 'field_cmcev_status',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
          'field_cmcev_public' => 0,
        ),
      ),
    ),
    'commerce_product' => array(
      'label' => 'Commerce Profile',
      'status' => 1,
      'bundle' => 'commerce_product',
      'fields_container' => array(
        'fields' => array(
          'commerce_items_amount_single' => 'commerce_items_amount_single',
          'commerce_items_customer_billing' => 'commerce_items_customer_billing',
          'commerce_items_payment' => 'commerce_items_payment',
          'commerce_items_cart' => 0,
        ),
      ),
      'order_status' => 'completed',
      'commerce_items_amount_single_settings' => array(
        'amount_config' => '0',
        'label' => 'Ticket price',
        'preset_amounts' => '50',
      ),
      'commerce_items_payment_settings' => array(
        'payment_processors' => array(
          'commerce_payment_example|commerce_payment_commerce_payment_example' => 'commerce_payment_example|commerce_payment_commerce_payment_example',
        ),
        'name_fields' => array(
          'crm_core_contact_individual_contact_name_given' => 'crm_core_contact_individual_contact_name_given',
          'crm_core_contact_individual_contact_name_family' => 'crm_core_contact_individual_contact_name_family',
        ),
        'commerce_billing_address_field' => 'commerce_items_customer_billing',
      ),
      'product_type' => 'event_registration',
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
      'weight' => '-38',
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
      'weight' => '-40',
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
      'weight' => '-37',
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
      'weight' => '-36',
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
      'weight' => '-35',
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
    'crm_core_activity_cmcev_event_registration_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => 'On-line Event Registration',
      'weight' => '-39',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_amount' => array(
      'field_name' => 'field_cmcev_amount',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => '[commerce-order:commerce-order-total:amount_decimal]',
      'weight' => '-41',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_event' => array(
      'field_name' => 'field_cmcev_event',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-42',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_order' => array(
      'field_name' => 'field_cmcev_order',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => '[commerce-order:order-id]',
      'weight' => '40',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_reg_date' => array(
      'field_name' => 'field_cmcev_reg_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_source' => array(
      'field_name' => 'field_cmcev_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Online Registration',
      'weight' => '-44',
    ),
    'crm_core_activity_cmcev_event_registration_field_cmcev_status' => array(
      'field_name' => 'field_cmcev_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcev_event_registration',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Registered',
      'weight' => '-45',
    ),
    'commerce_product_commerce_product_commerce_items_amount_single' => array(
      'field_name' => 'commerce_items_amount_single',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-47',
    ),
    'commerce_product_commerce_product_commerce_items_customer_billing' => array(
      'field_name' => 'commerce_items_customer_billing',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-46',
    ),
    'commerce_product_commerce_product_commerce_items_payment' => array(
      'field_name' => 'commerce_items_payment',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-45',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = 'events/thank-you';
  $crm_core_profile->message = 'Thank you for registration!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1378137904;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_cmcev_simple_single_form'] = $crm_core_profile;

  return $export;
}
