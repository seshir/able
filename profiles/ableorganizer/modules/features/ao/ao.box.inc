<?php
/**
 * @file
 * ao.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ao_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_branding';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Branding';
  $box->options = array(
    'body' => array(
      'value' => '<div class="ao-footer-branding"><a href="http://www.ableorganizer.org" target="_blank">AbleOrganizer</a> is&nbsp;© <a href="http://www.trellon.com" target="_blank">Trellon</a>. Built with <a href="http://www.drupal.org" target="_blank">Drupal</a> and <a href="http://www.drupal.org/project/crm_core" target="_blank">CRM Core</a>.</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ao_branding'] = $box;

  return $export;
}
