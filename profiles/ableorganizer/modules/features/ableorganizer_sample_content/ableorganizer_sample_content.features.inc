<?php
/**
 * @file
 * ableorganizer_sample_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ableorganizer_sample_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
