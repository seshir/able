<?php
/**
 * @file
 * ao.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ao_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ao_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fontyourface_features_default_font().
 */
function ao_fontyourface_features_default_font() {
  return array(
    'Cabin 500 (latin)' => array(
      'name' => 'Cabin 500 (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Cabin&subset=latin#500',
      'provider' => 'google_fonts_api',
      'css_selector' => 'h1, h2, h3, h4, h5, h6',
      'css_family' => 'Cabin',
      'css_style' => 'normal',
      'css_weight' => 500,
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:9:"Cabin:500";s:6:"subset";s:5:"latin";}',
    ),
    'Cabin regular (latin)' => array(
      'name' => 'Cabin regular (latin)',
      'enabled' => 1,
      'url' => 'http://www.google.com/webfonts/family?family=Cabin&subset=latin#regular',
      'provider' => 'google_fonts_api',
      'css_selector' => 'body',
      'css_family' => 'Cabin',
      'css_style' => 'normal',
      'css_weight' => 'normal',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:13:"Cabin:regular";s:6:"subset";s:5:"latin";}',
    ),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function ao_image_default_styles() {
  $styles = array();

  // Exported image style: adaptive.
  $styles['adaptive'] = array(
    'name' => 'adaptive',
    'label' => 'adaptive',
    'effects' => array(
      1 => array(
        'label' => 'Adaptive',
        'help' => 'Adaptive image scale according to client resolution.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'adaptive_image_scale_form',
        'summary theme' => 'adaptive_image_scale_summary',
        'module' => 'adaptive_image',
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
