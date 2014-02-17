<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function ableorganizer_sample_donation_pages_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_annual_appeal_form';
  $crm_core_profile->label = 'Annual Appeal Form';
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
      'bundle' => 'cmcd_donation',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_activity_notes' => 'field_activity_notes',
          'field_cmcd_amount' => 'field_cmcd_amount',
          'field_cmcd_order' => 'field_cmcd_order',
          'field_cmcd_page' => 'field_cmcd_page',
          'field_cmcd_payment_type' => 'field_cmcd_payment_type',
          'field_cmcd_receive_date' => 'field_cmcd_receive_date',
          'field_cmcd_source' => 'field_cmcd_source',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
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
        'label' => 'Amount',
        'preset_amounts' => '25',
      ),
      'commerce_items_payment_settings' => array(
        'payment_processors' => array(
          'all' => 'all',
        ),
        'name_fields' => array(
          'crm_core_contact_individual_contact_name_given' => 'crm_core_contact_individual_contact_name_given',
          'crm_core_contact_individual_contact_name_family' => 'crm_core_contact_individual_contact_name_family',
        ),
        'commerce_billing_address_field' => 'commerce_items_customer_billing',
      ),
      'product_type' => 'donation',
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
      'weight' => '-35',
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
      'weight' => '-34',
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
      'weight' => '-33',
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
      'weight' => '-32',
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
    'crm_core_activity_cmcd_donation_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Annual Appeal',
      'weight' => '-37',
    ),
    'crm_core_activity_cmcd_donation_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'This is an online donation received through the annual appeal page',
      'weight' => '-38',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_amount' => array(
      'field_name' => 'field_cmcd_amount',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '[commerce-order:commerce-order-total:amount_decimal]',
      'weight' => '-39',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_order' => array(
      'field_name' => 'field_cmcd_order',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '[commerce-order:order-id]',
      'weight' => '-40',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_page' => array(
      'field_name' => 'field_cmcd_page',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-41',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_payment_type' => array(
      'field_name' => 'field_cmcd_payment_type',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Credit Card',
      'weight' => '-42',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_receive_date' => array(
      'field_name' => 'field_cmcd_receive_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_source' => array(
      'field_name' => 'field_cmcd_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Annual Appeal',
      'weight' => '-44',
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
  $crm_core_profile->page_redirect = 'donate/thank-you';
  $crm_core_profile->message = 'Thank you for your donation!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1380109783;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_annual_appeal_form'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_donation_form';
  $crm_core_profile->label = 'Donation Form';
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
      'bundle' => 'cmcd_donation',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_activity_notes' => 'field_activity_notes',
          'field_cmcd_amount' => 'field_cmcd_amount',
          'field_cmcd_order' => 'field_cmcd_order',
          'field_cmcd_page' => 'field_cmcd_page',
          'field_cmcd_payment_type' => 'field_cmcd_payment_type',
          'field_cmcd_receive_date' => 'field_cmcd_receive_date',
          'field_cmcd_source' => 'field_cmcd_source',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
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
        'amount_config' => '1',
        'label' => 'Amount',
        'preset_amounts' => '25',
      ),
      'commerce_items_payment_settings' => array(
        'payment_processors' => array(
          'all' => 'all',
        ),
        'name_fields' => array(
          'crm_core_contact_individual_contact_name_given' => 'crm_core_contact_individual_contact_name_given',
          'crm_core_contact_individual_contact_name_family' => 'crm_core_contact_individual_contact_name_family',
        ),
        'commerce_billing_address_field' => 'commerce_items_customer_billing',
      ),
      'product_type' => 'donation',
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
      'weight' => '-35',
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
      'weight' => '-34',
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
      'weight' => '-33',
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
      'weight' => '-32',
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
    'crm_core_activity_cmcd_donation_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Online Donation',
      'weight' => '-37',
    ),
    'crm_core_activity_cmcd_donation_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'This is an online donation',
      'weight' => '-38',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_amount' => array(
      'field_name' => 'field_cmcd_amount',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '[commerce-order:commerce-order-total:amount_decimal]',
      'weight' => '-39',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_order' => array(
      'field_name' => 'field_cmcd_order',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '[commerce-order:order-id]',
      'weight' => '-40',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_page' => array(
      'field_name' => 'field_cmcd_page',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-41',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_payment_type' => array(
      'field_name' => 'field_cmcd_payment_type',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Credit Card',
      'weight' => '-42',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_receive_date' => array(
      'field_name' => 'field_cmcd_receive_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_source' => array(
      'field_name' => 'field_cmcd_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Online Donation',
      'weight' => '-44',
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
  $crm_core_profile->page_redirect = 'donate/thank-you';
  $crm_core_profile->message = 'Thank you for your donation!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1380109884;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_donation_form'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_fundraiser_form';
  $crm_core_profile->label = 'Fundraiser Form';
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
      'bundle' => 'cmcd_donation',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_activity_notes' => 'field_activity_notes',
          'field_cmcd_amount' => 'field_cmcd_amount',
          'field_cmcd_order' => 'field_cmcd_order',
          'field_cmcd_page' => 'field_cmcd_page',
          'field_cmcd_payment_type' => 'field_cmcd_payment_type',
          'field_cmcd_receive_date' => 'field_cmcd_receive_date',
          'field_cmcd_source' => 'field_cmcd_source',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
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
        'amount_config' => '2',
        'label' => 'Amount',
        'preset_amounts' => '10,25,50,100,250,500',
      ),
      'commerce_items_payment_settings' => array(
        'payment_processors' => array(
          'all' => 'all',
        ),
        'name_fields' => array(
          'crm_core_contact_individual_contact_name_given' => 'crm_core_contact_individual_contact_name_given',
          'crm_core_contact_individual_contact_name_family' => 'crm_core_contact_individual_contact_name_family',
        ),
        'commerce_billing_address_field' => 'commerce_items_customer_billing',
      ),
      'product_type' => 'donation',
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
      'weight' => '-35',
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
      'weight' => '-34',
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
      'weight' => '-33',
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
      'weight' => '-32',
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
    'crm_core_activity_cmcd_donation_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Online Donation',
      'weight' => '-37',
    ),
    'crm_core_activity_cmcd_donation_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'This is an online donation',
      'weight' => '-38',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_amount' => array(
      'field_name' => 'field_cmcd_amount',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '[commerce-order:commerce-order-total:amount_decimal]',
      'weight' => '-39',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_order' => array(
      'field_name' => 'field_cmcd_order',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '[commerce-order:order-id]',
      'weight' => '-40',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_page' => array(
      'field_name' => 'field_cmcd_page',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-41',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_payment_type' => array(
      'field_name' => 'field_cmcd_payment_type',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Other',
      'weight' => '-42',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_receive_date' => array(
      'field_name' => 'field_cmcd_receive_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_source' => array(
      'field_name' => 'field_cmcd_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => 'Fundraiser',
      'weight' => '-44',
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
  $crm_core_profile->page_redirect = 'donate/thank-you';
  $crm_core_profile->message = 'Thank you for your contribution to our fundraiser!';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1380109979;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array();
  $export['ao_fundraiser_form'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_walk_up_donation';
  $crm_core_profile->label = 'Walk Up Donation';
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
      'bundle' => 'cmcd_donation',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_activity_notes' => 'field_activity_notes',
          'field_cmcd_amount' => 'field_cmcd_amount',
          'field_cmcd_order' => 'field_cmcd_order',
          'field_cmcd_page' => 'field_cmcd_page',
          'field_cmcd_payment_type' => 'field_cmcd_payment_type',
          'field_cmcd_receive_date' => 'field_cmcd_receive_date',
          'field_cmcd_source' => 'field_cmcd_source',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
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
      'weight' => '-39',
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
      'weight' => '-38',
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
    'crm_core_activity_cmcd_donation_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 0,
      'default' => 'Walk Up Donation',
      'weight' => '-47',
    ),
    'crm_core_activity_cmcd_donation_field_activity_notes' => array(
      'field_name' => 'field_activity_notes',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 0,
      'default' => 'This is a walk up donation recorded in the system',
      'weight' => '-46',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_amount' => array(
      'field_name' => 'field_cmcd_amount',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_order' => array(
      'field_name' => 'field_cmcd_order',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_page' => array(
      'field_name' => 'field_cmcd_page',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '-41',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_payment_type' => array(
      'field_name' => 'field_cmcd_payment_type',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 0,
      'default' => '0',
      'weight' => '-44',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_receive_date' => array(
      'field_name' => 'field_cmcd_receive_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_source' => array(
      'field_name' => 'field_cmcd_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 0,
      'default' => 'Walk Up',
      'weight' => '-45',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = 'donate/thank-you';
  $crm_core_profile->message = 'Your contribution has been saved.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1380110107;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->roles = array(
    0 => 'administrator',
  );
  $export['ao_walk_up_donation'] = $crm_core_profile;

  return $export;
}
