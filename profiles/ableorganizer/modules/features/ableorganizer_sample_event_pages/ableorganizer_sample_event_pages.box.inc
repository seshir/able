<?php
/**
 * @file
 * ableorganizer_sample_event_pages.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_event_pages_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_event_desc';
  $box->plugin_key = 'simple';
  $box->title = 'Heads up!';
  $box->description = 'AO Event Description';
  $box->options = array(
    'body' => array(
      'value' => '<p>Each of the sample event pages included here demonstrate different techniques for creating forms that appeal to your audience.</p><ul><li>The Fundraiser dinner allows people to sign up for tickets at different levels.</li><li>The ACA symposium allows people to sign up individually to attend an event.</li><li>The Walk for Charity allows people to sign up individually at different levels.</li><li>The&nbsp;Health and Resource Fair and Cookie Decorating Party pages&nbsp;allow&nbsp;people to sign up for an event without needing to pay.</li></ul><p>Please note the registration tab, available for each event. Organizers can use this to access a list of people who have signed up for the event.</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['ao_event_desc'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'ao_event_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Event Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Events</h2>',
      'format' => 'full_html',
    ),
  );
  $export['ao_event_header'] = $box;

  return $export;
}
