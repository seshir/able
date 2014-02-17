<?php
/**
 * @file
 * Able Organizer installation profile.
 */

/**
 * Implements hook_update_index().
 *
 * Triggered only on installation.
 */
function ableorganizer_update_index() {
  // We need this to clear node_load cache after importing sample content in
  // order to prevent 'Notice: Undefined property: stdClass::$changed' msg.
  node_load_multiple(array(), array(), TRUE);
  variable_del('search_active_modules');
}
