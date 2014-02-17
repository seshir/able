<?php
/**
 * @file
 * ao.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ao_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-ao-navigation-items_contacts:crm-core/contact
  $menu_links['menu-ao-navigation-items_contacts:crm-core/contact'] = array(
    'menu_name' => 'menu-ao-navigation-items',
    'link_path' => 'crm-core/contact',
    'router_path' => 'crm-core/contact',
    'link_title' => 'Contacts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ao-navigation-items_contacts:crm-core/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-ao-navigation-items_dashboard:crm-core/dashboard
  $menu_links['menu-ao-navigation-items_dashboard:crm-core/dashboard'] = array(
    'menu_name' => 'menu-ao-navigation-items',
    'link_path' => 'crm-core/dashboard',
    'router_path' => 'crm-core',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ao-navigation-items_dashboard:crm-core/dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-ao-navigation-items_logout:user/logout
  $menu_links['menu-ao-navigation-items_logout:user/logout'] = array(
    'menu_name' => 'menu-ao-navigation-items',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ao-navigation-items_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-ao-navigation-items_my-account:user
  $menu_links['menu-ao-navigation-items_my-account:user'] = array(
    'menu_name' => 'menu-ao-navigation-items',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ao-navigation-items_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-ao-navigation-items_reports:crm-core/reports
  $menu_links['menu-ao-navigation-items_reports:crm-core/reports'] = array(
    'menu_name' => 'menu-ao-navigation-items',
    'link_path' => 'crm-core/reports',
    'router_path' => 'crm-core',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-ao-navigation-items_reports:crm-core/reports',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contacts');
  t('Dashboard');
  t('Logout');
  t('My Account');
  t('Reports');


  return $menu_links;
}
