<?php
/**
 * @file
 * ableorganizer_sample_petition_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ableorganizer_sample_petition_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'petition_header';
  $context->description = 'This displays headers and other page settings for sample petitions';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'petitions' => 'petitions',
        'petitions/*' => 'petitions/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_petition_header' => array(
          'module' => 'boxes',
          'delta' => 'ao_petition_header',
          'region' => 'above_content_1',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This displays headers and other page settings for sample petitions');
  t('sample_content');
  $export['petition_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'petitions_page_blocks';
  $context->description = 'Places blocks on "petitions" page';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'petitions' => 'petitions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_petition_description' => array(
          'module' => 'boxes',
          'delta' => 'ao_petition_description',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Places blocks on "petitions" page');
  t('sample_content');
  $export['petitions_page_blocks'] = $context;

  return $export;
}
