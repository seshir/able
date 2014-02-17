<?php
/**
 * @file
 * ableorganizer_sample_content.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_content_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'above_content_lower';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Promo - What it does';
  $box->options = array(
    'body' => array(
      'value' => '<h2><span>What it does</span></h2><div class="ao_profeat_holder"><!-- profeat wrapper //--><div class="ao_profeat ao_profeat_donation"><div class="ao_profeat_icon_outer"><div class="ao_profeat_icon"><span>&nbsp;</span></div></div><h3>Fundraising</h3>Manage online and offline donations.<div class="button ao_profeat_button">See How</div><div class="ao_profeat_dialog_content"><div class="ao_profeat_dialog_title ao_profeat_dialog_fundraising"><div class="title_bg"><div class="ao_profeat_dialog_icon"><span>&nbsp;</span></div><div class="title_inner">Fundraising</div></div></div><ul><li>Create online and offline donation forms</li><li>Integrates directly with Drupal Commerce</li><li>Supports multiple donation forms</li><li>Track donations by source, frequency, and other factors</li><li>Create lists of donors through CRM Core</li><li>Generate LYBUNT, SYBUNT reports, along with many more</li><li>Customizable reporting interface for creating metrics that matter</li></ul></div></div><!-- profeat wrapper //--><div class="ao_profeat ao_profeat_event"><div class="ao_profeat_icon_outer"><div class="ao_profeat_icon"><span>&nbsp;</span></div></div><h3>Events</h3>Register people for events, sell tickets and more.<div class="button ao_profeat_button">See How</div><div class="ao_profeat_dialog_content"><div class="ao_profeat_dialog_title ao_profeat_dialog_events"><div class="title_bg"><div class="ao_profeat_dialog_icon"><span>&nbsp;</span></div><div class="title_inner">Events</div></div></div><ul><li>Promote events online with varying registration options</li><li>Supports single registration, tiered pricing and multiple ticket levels</li><li>Manage registration, track attendance, issue receipts and send thank you letters</li><li>Track registration by source, frequency, and other factors</li><li>Create lists of attendees through CRM Core</li><li>Generate reports about attendance, revenues and other key metrics</li><li>Customizable reporting interface for creating reports that matter</li></ul></div></div><!-- profeat wrapper //--><div class="ao_profeat ao_profeat_petition"><div class="ao_profeat_icon_outer"><div class="ao_profeat_icon"><span>&nbsp;</span></div></div><h3>Petitions</h3>Track signatures in support of specific initiatives.<div class="button ao_profeat_button">See How</div><div class="ao_profeat_dialog_content"><div class="ao_profeat_dialog_title ao_profeat_dialog_petition"><div class="title_bg"><div class="ao_profeat_dialog_icon"><span>&nbsp;</span></div><div class="title_inner">Petitions</div></div></div><ul><li>Collect signatures for initiatives online</li><li>View lists of signatories and show them online through opt-in permissions</li><li>Set targets, display counters and more</li><li>Send targeted messages through petitions to influence decisionmakers</li><li>Track signatures by source, frequency and other factors</li><li>Create lists of signatories through CRM Core</li><li>Generate reports about performance, effectiveness, and other key metrics</li><li>Customizable reporting interface for creating reports that matter</li></ul></div></div><!-- profeat wrapper //--><div class="ao_profeat ao_profeat_volunteer"><div class="ao_profeat_icon_outer"><div class="ao_profeat_icon"><span>&nbsp;</span></div></div><h3>Volunteer</h3>Register volunteers and list ways to get involved.<div class="button ao_profeat_button">See How</div><div class="ao_profeat_dialog_content"><div class="ao_profeat_dialog_title ao_profeat_dialog_volunteer"><div class="title_bg"><div class="ao_profeat_dialog_icon"><span>&nbsp;</span></div><div class="title_inner">Volunteer</div></div></div><ul><li>Allow people to register for volunteer opportunities online</li><li>Set targets for registration and sign people up for waitlists when slots are filled</li><li>Organizers can track attendance, set volunteer roles and more</li><li>Support for offline volunteer registration</li><li>Track volunteer activity by attendance, participation and other factors</li><li>Create lists of volunteers through CRM Core</li><li>Customizable reporting interface for creating reports that matter</li></ul></div></div><div class="ao_profeat_dialog">&nbsp;</div></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['above_content_lower'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'documentation_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Documentation Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Documentation</h2>',
      'format' => 'full_html',
    ),
  );
  $export['documentation_header'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'hero_content';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Promo - Hero Content';
  $box->options = array(
    'body' => array(
      'value' => '<div class="hero_text"><h2>Build. Engage. Organize.</h2>AbleOrganizer empowers organizations with effective tools for building ideas into movements.</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['hero_content'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'lower_zone';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Promo - Benefits';
  $box->options = array(
    'body' => array(
      'value' => '<h2><span>Benefits</span></h2><div class="ao-featlist"><ul><li>Complete CMS and CRM&nbsp;platform</li><li>Drag-and-drop form creation through online form builder</li><li>Flexible, responsive&nbsp;layout that can be customized and themed</li><li>Contact-to-user integration</li><li>Comprehensive, customizable reports</li><li>Open source, free to modify and share, no vendor lock in</li></ul></div><div class="ao-featlist"><ul><li>Seamless integration between outreach /&nbsp;advocacy tools and content</li><li>360 degree view of consituents</li><li>Unlimited custom fields and activities</li><li>Dashboards and online&nbsp;reporting</li><li>Source tracking</li><li>Support for multiple payment processors, mass email, and other third-party services</li></ul></div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['lower_zone'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'lower_zone_2';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Promo - Get Able';
  $box->options = array(
    'body' => array(
      'value' => '<h2><span>Get Able</span></h2><h3>AbleOrganizer is a Community Engagement Platform</h3><div class="ao-info-masthead">Open source and built to be customized. Here\'s how to get started fast and make the most out of it.</div><div class="ao-info-holder"><!-- infoitem //--><div class="ao-info-item"><h4>Getting started</h4>How to install AbleOrganizer, configure donation processing, configure outbound email and other topics.<div class="button ao-info-btn"><a href="about">Learn More</a></div></div><!-- infoitem //--><div class="ao-info-item"><h4>The platform</h4>How to work with donation forms, event registration, contact records, activities, linking users and contacts, and more.<div class="button ao-info-btn"><a href="/about/the-system">Learn More</a></div></div><!-- infoitem //--><div class="ao-info-item"><h4>Power Users</h4>How to get the most out of AbleOrganizer, extend the system, and otherwise make Drupal more powerful than ever.<div class="button ao-info-btn"><a href="/about/extending-the-platform">Learn More</a></div></div></div><div class="ao-down-arrow">&nbsp;</div>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['lower_zone_2'] = $box;

  return $export;
}
