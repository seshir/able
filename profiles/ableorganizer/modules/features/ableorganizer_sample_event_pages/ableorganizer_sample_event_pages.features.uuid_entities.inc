<?php
/**
 * @file
 * ableorganizer_sample_event_pages.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_event_pages_uuid_default_entities() {
  $entities = array();

  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/37106c78-84c8-4e74-a387-5c04b03f5375',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Our organization\'s 93rd annual fundraiser dinner and will be filled with excitment and surprises as a Guest Comedian entertains and delights guests during a sumptuous dinner prepared by one trio of the city\'s finest chefs. &nbsp;</p><p>The night will begin with a social, allowing guests the opportunity to connect with&nbsp;old friends and meet new ones. Friends of our organization will be on hand, including a noted author and humanitarian who was recently featured on some show. You will have a chance to meet community leaders, volunteers, and contributors that have played a role in helping the organization grow.</p><p>During dinner, guests will hear our executive director&nbsp;present on her vision for building a bigger organization, and have the chance to ask questions.&nbsp; You will hear from&nbsp;leaders of organizations that have been helped by the contributions made by organizational&nbsp;members as well as some of the&nbsp;families who have benefited from their generosity.</p><p>There will be a raffle with prizes that&nbsp;include a Paradise Vacation on some island valued at $2,500! &nbsp;Every guest will recieve a thank you gift for being a part of the evening. &nbsp;Auction items will include lots of gifts and prizes as well as Luxury Vacations.</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => '37106c78-84c8-4e74-a387-5c04b03f5375',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => 'Donor|50,Major Donor|100,MVP Donor|250,Friend of the Organization|500',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(
      'commerce_items_cart_items' => array(
        0 => array(
          'title' => 'Donor',
          'amount' => 50,
        ),
        1 => array(
          'title' => 'Major Donor',
          'amount' => 100,
        ),
        2 => array(
          'title' => 'MVP Donor',
          'amount' => 250,
        ),
        3 => array(
          'title' => 'Friend of the Organization',
          'amount' => 500,
        ),
      ),
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '37106c78-84c8-4e74-a387-5c04b03f5375',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_quantity_form',
      'display_profile' => 0,
      'inline_title' => 'Buy tickets today!',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => '2013-10-01 09:00:00',
          'value2' => '2013-10-06 19:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'DC',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Washington',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 20013,
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '49th Street Northwest',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Join us for our 93rd Annual Fundraiser Dinner! ',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/annual-fundraiser-dinner',
        'language' => 'und',
      ),
    ),
    'uuid' => '37106c78-84c8-4e74-a387-5c04b03f5375',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/52a80050-d98f-4bbf-90e8-9526dd3c77a1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>With enrollment in health insurance marketplaces set to begin in October, our organziation will engage state legislators in a timely forum on the critical next steps in implementation of the Affordable Care Act. We\'ll dive deep on the timetable for states in the coming months, the impact it will have on public policy, and what it means for millions of participants looking to enroll.</p><p>Joining us will be a forum of&nbsp;leading lawmakers and experts including:</p><ul><li>Senator Sandy Someone&nbsp;(Chair, Working Group of Health Reform for State Senators)</li><li>Mandy Mottlet&nbsp;(Legislative Director, Network of Reformed States)</li><li>Speakers from the U.S. Department of Health and Human Services</li></ul><p>The cost of registration is $50, which goes towards lunch and supporting organizing events like this in the future.</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => '52a80050-d98f-4bbf-90e8-9526dd3c77a1',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => '52a80050-d98f-4bbf-90e8-9526dd3c77a1',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_single_form',
      'display_profile' => 0,
      'inline_title' => 'Registration form',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => '2013-10-07 09:00:00',
          'value2' => '2013-10-12 19:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'DC',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Washington',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 20009,
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '1914 Connecticut Avenue NW',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'What state legislators need to know to make the ACA affordable',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/single-ticket',
        'language' => 'und',
      ),
    ),
    'uuid' => '52a80050-d98f-4bbf-90e8-9526dd3c77a1',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/88e4e269-7dff-48ef-a527-c109f2e9ca6f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Thank you for registration!',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Thank you',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/thank-you',
        'language' => 'und',
      ),
    ),
    'uuid' => '88e4e269-7dff-48ef-a527-c109f2e9ca6f',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/8cbf5460-9633-4fcd-a730-c5832c19e5f0',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Run or walk- it is a race we can all enter!! Join the race to support our charity. Shirts are guaranteed for the first 500 people. Sign up as a&nbsp;family or company and we will give you a&nbsp;bonus goodie bag.&nbsp;</p><!--break--><p>This year\'s race is a 5K, with an updated route. It is perfect as a part of your training for a longer race, a relaxing run, or to show five kilometers who\'s boss.&nbsp;</p><p>Sign up early so you don\'t miss out on our awesome race t-shirts. Be sure to wear your t-shirts on Race Day!!</p><p>A Prize will be awarded to the largest team that participates. See how many people you can register- every runner will make a difference!&nbsp;</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => '8cbf5460-9633-4fcd-a730-c5832c19e5f0',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(
      'commerce_items_cart_items' => array(),
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '8cbf5460-9633-4fcd-a730-c5832c19e5f0',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_many_form',
      'display_profile' => 0,
      'inline_title' => 'Registration form',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => '2013-10-13 09:00:00',
          'value2' => '2013-10-13 09:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'DC',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Washington ',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 20016,
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '49th Street Northwest',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => '5k Run/ Walk for Charity',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/multiple-ticket-level',
        'language' => 'und',
      ),
    ),
    'uuid' => '8cbf5460-9633-4fcd-a730-c5832c19e5f0',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/c4e0254b-e193-4f95-b843-fde40151fd81',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>The only back to school inclusion event and health and wellness fair for children with developmental disabilities and their typically-developing siblings, peers and families, This event is a massive, annual resource fair that brings together over 2,000 participants for a day of health education, resources, interactive play and community engagement. &nbsp;Over 50 medical and health resource vendors provide families with free medical and dental screenings, legal counseling, cooking and exercise demonstrations, and workshops on a range of topics from the latest technology for the classroom to how to reduce your blood pressure through daily exercises.</p><p>The event includes fun activities that encourage social interaction, physical fitness, and language development for kids. As a way of promoting and encouraging learning, all kids are provided with books, backpacks, school supplies and healthy snacks. One of the event’s highlights is the highly anticipated raffle which includes special educational items and learning tools such as iPads and laptop computers.</p><p><strong>Highlights</strong></p><ul><li>Medical and dental screenings</li><li>Haircuts</li><li>Legal clinic</li><li>Raffle with iPads and laptops</li><li>Give-aways including backpacks and school supplies</li><li>Educational classes and workshops</li><li>Fun activities including a petting zoo, pony rides, rock climbing, arts and crafts, live entertainment, celebrity guests, video games, bouncy castles, and more</li><li>Healthy lunch and snacks</li></ul>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => 'c4e0254b-e193-4f95-b843-fde40151fd81',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => 'c4e0254b-e193-4f95-b843-fde40151fd81',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_reg_form',
      'display_profile' => 0,
      'inline_title' => 'Sign up for the health fair',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => '2013-10-19 09:00:00',
          'value2' => '2013-10-19 09:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'DC',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Washington',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 200013,
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '49th Street Northwest',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Health and Resource Fair',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/basic',
        'language' => 'und',
      ),
    ),
    'uuid' => 'c4e0254b-e193-4f95-b843-fde40151fd81',
  );
  $entities['cmce_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Join us for an afternoon of No Kid Going Hungry with our cookie decorating party. Master chef so-and-so will be hosting the event and sharing recipes for making&nbsp;snickerdoodles, German chocolate chip, and iced raisin&nbsp;falafel cookies.</p><p>We\'ll provide cookies and decorations, all you have to do is be there! Your family\'s participation will go a long way towards helping to support our campaign. We will be packaging cookie grams for needy families in our area delivered on birthdays and holidays over the next month.</p><p>Teach your children about giving. Everyone can do their part to help end childhood hunger.</p><p>&nbsp;</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_event_node_config' => array(
      'nid' => 'e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
      'display_registrants' => 1,
      'thanks_email' => '',
      'tickets' => '',
      'max_registration' => 0,
    ),
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => 'e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
      'use_profile' => 1,
      'profile_name' => 'ao_cmcev_simple_reg_form',
      'display_profile' => 0,
      'inline_title' => 'Come bake with us!',
    ),
    'field_cmcev_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datetime',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => '2013-10-25 09:00:00',
          'value2' => '2013-10-30 19:00:00',
        ),
      ),
    ),
    'field_cmcev_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'TX',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Luckenbach',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => 78647,
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '123 Main Street',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 0,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'No Kid Goes Hungry Cookie Decorating Party',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcev_event',
    'uid' => 0,
    'url_alias' => array(
      0 => array(
        'alias' => 'events/cookiedrive',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e340d2ab-485b-4e68-b35c-c4e07a7b80c5',
  );

  return $entities;
}
