<?php
/**
 * @file
 * ableorganizer_sample_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ableorganizer_sample_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_article';
  $strongarm->value = array(
    0 => 'menu-getting-started',
    1 => 'main-menu',
    2 => 'menu-power-users',
    3 => 'menu-the-system',
  );
  $export['menu_options_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'menu-getting-started',
    1 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  return $export;
}
