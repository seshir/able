<?php
/**
 * @file
 * ao.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ao_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ao-navigation-items.
  $menus['menu-ao-navigation-items'] = array(
    'menu_name' => 'menu-ao-navigation-items',
    'title' => 'AbleOrganizer Navigation Items',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('AbleOrganizer Navigation Items');


  return $menus;
}
