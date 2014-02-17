<?php
/**
 * @file
 * ableorganizer_sample_content.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ableorganizer_sample_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-getting-started.
  $menus['menu-getting-started'] = array(
    'menu_name' => 'menu-getting-started',
    'title' => 'Getting Started',
    'description' => 'Documentation for how to get started with AbleOrganizer.',
  );
  // Exported menu: menu-power-users.
  $menus['menu-power-users'] = array(
    'menu_name' => 'menu-power-users',
    'title' => 'Power Users',
    'description' => '',
  );
  // Exported menu: menu-the-system.
  $menus['menu-the-system'] = array(
    'menu_name' => 'menu-the-system',
    'title' => 'The Platform',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Documentation for how to get started with AbleOrganizer.');
  t('Getting Started');
  t('Power Users');
  t('The Platform');


  return $menus;
}
