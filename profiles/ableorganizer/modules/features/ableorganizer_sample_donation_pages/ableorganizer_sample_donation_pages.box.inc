<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_donation_pages_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_donate_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Donate Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Donate</h2>',
      'format' => 'full_html',
    ),
  );
  $export['ao_donate_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_donate_info';
  $box->plugin_key = 'simple';
  $box->title = 'Heads up!';
  $box->description = 'AO Donation Info';
  $box->options = array(
    'body' => array(
      'value' => '<p>Each of the sample donation pages included here demonstrate different techniques for creating forms that appeal to your audience.</p><ul><li>The online donation page allows free-entry, where people can enter any amount they choose.</li><li>The annual appeal page allows people to donate a specific amount.</li><li>The fundraiser page allows people to donate at one of several specific levels.</li><li>The walk up donations page is actually a standalone data entry form. You can use something like it to track offline donations in your site.</li></ul>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['ao_donate_info'] = $box;

  return $export;
}
