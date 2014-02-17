<?php
/**
 * @file
 * ao.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ao_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'branding_and_whatnot';
  $context->description = 'Adds logos to the footer';
  $context->tag = 'sample_content';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-ao_branding' => array(
          'module' => 'boxes',
          'delta' => 'ao_branding',
          'region' => 'footer_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Adds logos to the footer');
  t('sample_content');
  $export['branding_and_whatnot'] = $context;

  return $export;
}
