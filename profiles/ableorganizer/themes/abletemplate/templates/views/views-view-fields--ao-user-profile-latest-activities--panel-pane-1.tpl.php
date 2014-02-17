<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */

  // need to build strings around the different types
  $contact_name = $fields['contact_name']->content;

  $class_name = '';
  $activity_string = '';

  if ($fields['type']->raw == 'cmcd_donation') {
    $class_name = 'ao_activity_donation';
    $activity_string = $contact_name . ' made a donation to ' . $fields['field_cmcd_page']->content;
  } else
  if ($fields['type']->raw == 'cmcp_petition_signature') {
    $class_name = 'ao_activity_petition';
    $activity_string = $contact_name . ' signed the petition ' . $fields['field_cmcp_petition_page']->content;
  } else
  if ($fields['type']->raw == 'cmcev_event_registration') {
    $class_name = 'ao_activity_event';
    $activity_string = $contact_name . ' registered for the event ' . $fields['field_cmcev_event']->content;
  } else
  if ($fields['type']->raw == 'cmcv_volunteer_commitment') {
    $class_name = 'ao_activity_volunteer';
    $activity_string = $contact_name . ' volunteered for ' . $fields['field_cmcv_vo_reference']->content;
  }

?>
<div class="ao_activity_feed_item">
  <div class="ao_activity_feed_icon <?php print $class_name; ?>"><span></span></div>
  <div class="ao_activity_feed_string">
    <?php print $activity_string; ?>
  </div>
  <div class="ao_activity_feed_date">
    <?php print $fields['field_activity_date']->content; ?>
  </div>
</div>
