<?php
/**
 * @file
 * ableorganizer_sample_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ableorganizer_sample_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ao_frontpage_context';
  $context->description = 'Displays various blocks on the front page used to describe AbleOrganizer';
  $context->tag = 'front page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-hero_content' => array(
          'module' => 'boxes',
          'delta' => 'hero_content',
          'region' => 'above_content_1',
          'weight' => '-10',
        ),
        'boxes-above_content_lower' => array(
          'module' => 'boxes',
          'delta' => 'above_content_lower',
          'region' => 'above_content_2',
          'weight' => '-10',
        ),
        'boxes-lower_zone' => array(
          'module' => 'boxes',
          'delta' => 'lower_zone',
          'region' => 'below_content_1',
          'weight' => '-10',
        ),
        'boxes-lower_zone_2' => array(
          'module' => 'boxes',
          'delta' => 'lower_zone_2',
          'region' => 'below_content_2',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays various blocks on the front page used to describe AbleOrganizer');
  t('front page');
  $export['ao_frontpage_context'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'documentation';
  $context->description = 'Displays blocks and regions related to documentation';
  $context->tag = 'documentation';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'about' => 'about',
        'about/*' => 'about/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-documentation_header' => array(
          'module' => 'boxes',
          'delta' => 'documentation_header',
          'region' => 'above_content_1',
          'weight' => '-10',
        ),
        'menu-menu-getting-started' => array(
          'module' => 'menu',
          'delta' => 'menu-getting-started',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-the-system' => array(
          'module' => 'menu',
          'delta' => 'menu-the-system',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'menu-menu-power-users' => array(
          'module' => 'menu',
          'delta' => 'menu-power-users',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays blocks and regions related to documentation');
  t('documentation');
  $export['documentation'] = $context;

  return $export;
}
