<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ableorganizer_sample_donation_pages_commerce_product_default_types() {
  $items = array(
    'donation' => array(
      'type' => 'donation',
      'name' => 'Donation',
      'description' => '',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ableorganizer_sample_donation_pages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ableorganizer_sample_donation_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
