<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ableorganizer_sample_donation_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'donate_header';
  $context->description = 'This displays headers on top of the donate pages. ';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'donate' => 'donate',
        'donate/*' => 'donate/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_donate_header' => array(
          'module' => 'boxes',
          'delta' => 'ao_donate_header',
          'region' => 'above_content_1',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This displays headers on top of the donate pages. ');
  t('sample_content');
  $export['donate_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'donate_page_blocks';
  $context->description = 'Place blocks on "donate" page';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'donate' => 'donate',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_donate_info' => array(
          'module' => 'boxes',
          'delta' => 'ao_donate_info',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sample_content');
  t('Place blocks on "donate" page');
  $export['donate_page_blocks'] = $context;

  return $export;
}
