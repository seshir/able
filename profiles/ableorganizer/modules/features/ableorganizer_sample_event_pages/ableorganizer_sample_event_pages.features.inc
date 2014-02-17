<?php
/**
 * @file
 * ableorganizer_sample_event_pages.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ableorganizer_sample_event_pages_commerce_product_default_types() {
  $items = array(
    'event_registration' => array(
      'type' => 'event_registration',
      'name' => 'Event registration',
      'description' => '',
      'help' => '',
      'revision' => 0,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ableorganizer_sample_event_pages_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ableorganizer_sample_event_pages_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
