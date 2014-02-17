<?php
/**
 * @file
 * ao.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function ao_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'ao_contact_individual';
  $openlayers_maps->title = 'AbleOrganizer Contact: Individual';
  $openlayers_maps->description = 'Displays addresses for an individual on a map.';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '-91.5820312479728, 40.178873319314164',
        'zoom' => '15',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 0,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'ao_contact_map_individual_openlayers_1' => 'ao_contact_map_individual_openlayers_1',
        ),
        'panMapIfOutOfView' => 1,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'ao_contact_map_individual_openlayers_1' => 'ao_contact_map_individual_openlayers_1',
          'mapquest_osm' => 0,
        ),
        'point_zoom_level' => '15',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'ao_contact_map_individual_openlayers_1' => 'ao_contact_map_individual_openlayers_1',
    ),
    'layer_weight' => array(
      'ao_contact_map_individual_openlayers_1' => '0',
      'ao_contacts_for_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ao_contacts_for_map_openlayers_1' => '0',
      'ao_contact_map_individual_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ao_contacts_for_map_openlayers_1' => '0',
      'ao_contact_map_individual_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ao_contacts_for_map_openlayers_1' => '0',
      'ao_contact_map_individual_openlayers_1' => 'default_marker_black_small',
    ),
    'layer_activated' => array(
      'ao_contact_map_individual_openlayers_1' => 'ao_contact_map_individual_openlayers_1',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ao_contacts_for_map_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'ao_contact_map_individual_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'ao_contacts_for_map_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:900913',
    'styles' => array(
      'default' => 'default_marker_black_small',
      'select' => 'default_marker_black_small',
      'temporary' => 'default_marker_black_small',
    ),
  );
  $export['ao_contact_individual'] = $openlayers_maps;

  return $export;
}
