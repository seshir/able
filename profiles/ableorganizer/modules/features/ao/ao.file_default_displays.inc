<?php
/**
 * @file
 * ao.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function ao_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_colorbox';
  $file_display->weight = -42;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'colorbox_node_style' => 'adaptive',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $export['image__colorbox__file_field_colorbox'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__colorbox__file_field_media_colorbox';
  $file_display->weight = -41;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'file_view_mode' => 'preview',
    'colorbox_view_mode' => 'full',
    'fixed_width' => '',
    'fixed_height' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'title',
    'audio_playlist' => 0,
  );
  $export['image__colorbox__file_field_media_colorbox'] = $file_display;

  return $export;
}
