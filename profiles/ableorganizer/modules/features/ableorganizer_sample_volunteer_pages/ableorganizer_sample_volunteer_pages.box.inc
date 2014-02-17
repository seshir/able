<?php
/**
 * @file
 * ableorganizer_sample_volunteer_pages.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_volunteer_pages_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_volunteer_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Volunteer Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Volunteer</h2>',
      'format' => 'full_html',
    ),
  );
  $export['ao_volunteer_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_volunteer_info';
  $box->plugin_key = 'simple';
  $box->title = 'Heads Up!';
  $box->description = 'AO Volunteer Info';
  $box->options = array(
    'body' => array(
      'value' => '<p style="font-size: 13px; line-height: 20px;">Each of the sample volunteer&nbsp;pages included here allow people to sign up for opportunities.</p><ul style="font-size: 13px; line-height: 20px;"><li>Each volunteer tab has a registration screen available to organizers.</li><li>Use the controls on this page to register people for specific roles and track attendance.</li><li>Also use the controls on this page to communicate with volunteers via email.</li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ao_volunteer_info'] = $box;

  return $export;
}
