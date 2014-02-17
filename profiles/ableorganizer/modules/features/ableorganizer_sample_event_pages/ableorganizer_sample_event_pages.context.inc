<?php
/**
 * @file
 * ableorganizer_sample_event_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ableorganizer_sample_event_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'event_header';
  $context->description = 'Header appearing over event descriptions.';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
        'events/*' => 'events/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_event_header' => array(
          'module' => 'boxes',
          'delta' => 'ao_event_header',
          'region' => 'above_content_1',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header appearing over event descriptions.');
  t('sample_content');
  $export['event_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events_page_blocks';
  $context->description = 'Place blocks on "events" page';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_event_desc' => array(
          'module' => 'boxes',
          'delta' => 'ao_event_desc',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Place blocks on "events" page');
  t('sample_content');
  $export['events_page_blocks'] = $context;

  return $export;
}
