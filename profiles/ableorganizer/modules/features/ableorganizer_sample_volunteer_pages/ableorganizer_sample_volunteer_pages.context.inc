<?php
/**
 * @file
 * ableorganizer_sample_volunteer_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ableorganizer_sample_volunteer_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ao_volunteer_header';
  $context->description = 'This displays headers in the volunteer section';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'volunteers' => 'volunteers',
        'volunteers/*' => 'volunteers/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_volunteer_header' => array(
          'module' => 'boxes',
          'delta' => 'ao_volunteer_header',
          'region' => 'above_content_1',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This displays headers in the volunteer section');
  t('sample_content');
  $export['ao_volunteer_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'volunteers_page_blocks';
  $context->description = 'Places blocks on "volunteers" page';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'volunteers' => 'volunteers',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_volunteer_info' => array(
          'module' => 'boxes',
          'delta' => 'ao_volunteer_info',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places blocks on "volunteers" page');
  t('sample_content');
  $export['volunteers_page_blocks'] = $context;

  return $export;
}
