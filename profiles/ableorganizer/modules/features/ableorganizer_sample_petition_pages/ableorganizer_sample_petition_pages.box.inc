<?php
/**
 * @file
 * ableorganizer_sample_petition_pages.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_petition_pages_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_petition_description';
  $box->plugin_key = 'simple';
  $box->title = 'Heads up!';
  $box->description = 'AO Petition Description';
  $box->options = array(
    'body' => array(
      'value' => '<p>Each of the sample petition pages included here demonstrate similar techniques for creating forms for engaging your audience.</p><ul><li>Each one includes a petition counter.</li><li>Many of them include a checkbox allowing people to opt-in to have their signature seen publicly.</li><li>Each one includes a signatories tab. This allows people to see who else has signed a petition, and only shows the signatures where people have opted in to have their signature seen publicly.</li></ul>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ao_petition_description'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_petition_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Petition Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Petitions</h2>',
      'format' => 'full_html',
    ),
  );
  $export['ao_petition_header'] = $box;

  return $export;
}
