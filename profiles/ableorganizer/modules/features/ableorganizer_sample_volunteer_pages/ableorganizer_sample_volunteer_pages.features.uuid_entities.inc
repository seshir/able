<?php
/**
 * @file
 * ableorganizer_sample_volunteer_pages.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_volunteer_pages_uuid_default_entities() {
  $entities = array();

  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/0b621efb-62fa-4312-b0bd-479c6d8d8be4',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>The animal shelter needs your help. We are experiencing high seasonal demand and are looking for workers to cover some of the extra shifts.</p><p>Currently,&nbsp;volunteers are working with our staff to cover&nbsp;a variety of roles:</p><ul><li>Animal Socializer: Work with the animals to make them more adoptable</li><li>Adoption Counselor: Help people find the perfect animal to join their family</li><li>Animal Care: Make sure our animals are fed and kept clean</li></ul><p>Sign up for this opportunity and one of our volunteer coordinators will contact you.</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => '0b621efb-62fa-4312-b0bd-479c6d8d8be4',
      'use_profile' => 1,
      'profile_name' => 'ao_volunteer_commitment_form',
      'display_profile' => 0,
      'inline_title' => 'Get Involved',
    ),
    'crm_core_volunteer_node_config' => array(
      'nid' => '0b621efb-62fa-4312-b0bd-479c6d8d8be4',
      'wait_list' => 0,
      'sign_email' => '',
      'wait_email' => '',
    ),
    'field_cmcv_contact' => array(),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => 1386099000,
          'value2' => 1386099000,
        ),
      ),
    ),
    'field_cmcv_location' => array(
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
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '',
        ),
      ),
    ),
    'field_cmcv_roles' => array(
      'und' => array(
        0 => array(
          'format' => NULL,
          'value' => 'Animal Socializer, Adoption Counselor, Animal Care',
        ),
      ),
    ),
    'field_cmcv_slots' => array(
      'und' => array(
        0 => array(
          'value' => 36,
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
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
    'title' => 'Work with Homeless Animals',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/work-with-homeless-animals',
        'language' => 'und',
      ),
    ),
    'uuid' => '0b621efb-62fa-4312-b0bd-479c6d8d8be4',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Are you interested in improving the environment and creating a more inclusive clean energy economy? Would you like to make a tangible difference in the fight against poverty?</p><p><!--break-->Our organization is a non-profit working to create green jobs through our newly launched organizing campaign, Retrofit The City, and we are looking for volunteers! Retrofit the City\'s mission is to create green career opportunities for underserved city residents. The project does this by using innovative community organizing tactics to grow the demand for home energy improvements.</p><p>Volunteers are critical to the success of our program and will be encouraged to join us for as much time as they have, whether that be a few hours every week or every month. They will participate in neighborhood canvasses, phone banks and build relationships with community leaders.</p><p><strong>Opportunities:</strong></p><ul><li>Conduct direct homeowner engagement, including door-to-door canvassing and direct outreach at community events</li><li>Participate in community meetings</li><li>Contribute to a strategic outreach plan</li></ul><p><strong>Benefits:</strong></p><ul><li>Meet awesome, driven, like minded people</li><li>Make a tangible difference in the lives of Baltimore residents</li><li>Have fun!</li></ul>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => '0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
      'use_profile' => 1,
      'profile_name' => 'ao_volunteer_commitment_form',
      'display_profile' => 0,
      'inline_title' => 'Volunteer form',
    ),
    'crm_core_volunteer_node_config' => array(
      'nid' => '0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
      'wait_list' => 0,
      'sign_email' => '',
      'wait_email' => '',
    ),
    'field_cmcv_contact' => array(),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => 1382796000,
          'value2' => 1382796000,
        ),
      ),
    ),
    'field_cmcv_location' => array(
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
          'thoroughfare' => '',
        ),
      ),
    ),
    'field_cmcv_roles' => array(),
    'field_cmcv_slots' => array(
      'und' => array(
        0 => array(
          'value' => 20,
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
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
    'title' => 'Improve the Environment and Fight Poverty through Community Outreach!',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/keep-our-creek-clean',
        'language' => 'und',
      ),
    ),
    'uuid' => '0d86ea2a-fb8a-4ec5-8a00-3361772433d3',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>We are looking for amazing adult who are want to make a difference in the lives of young people to work with children in the city.</p><p>Our programs engage youth in intentional programs that help them build life skills, have fund and demonstrate leadership. Programs are held in out of school time hours in various locations around the city. Work with school based or partner based programs includes helping kids with literacy projects, career exploration, enviornmental education, service learning projects, health education and fitness programs and more. Our volunteers make a difference -&nbsp;you can too.</p>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => '2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
      'use_profile' => 1,
      'profile_name' => 'ao_volunteer_commitment_form_2',
      'display_profile' => 0,
      'inline_title' => 'I want to help!',
    ),
    'crm_core_volunteer_node_config' => array(
      'nid' => '2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
      'wait_list' => 0,
      'sign_email' => '',
      'wait_email' => '',
    ),
    'field_cmcv_contact' => array(),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => 1378148400,
          'value2' => 1387396800,
        ),
      ),
    ),
    'field_cmcv_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'MA',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'Boston',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '',
        ),
      ),
    ),
    'field_cmcv_roles' => array(),
    'field_cmcv_slots' => array(
      'und' => array(
        0 => array(
          'value' => 14,
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
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
    'title' => 'Help Youth Find Their Voice as a Volunteer',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/after-school-tutors-needed',
        'language' => 'und',
      ),
    ),
    'uuid' => '2a0e3955-18a5-4be1-a2c4-8dff6e05be73',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Our program offers transitional and permanent housing for homeless women and their children. We provide these families with a safe environment in which to live. We also provide counseling, career and life skills training, and employment assistance to help the women of our program achieve independence.&nbsp;</p><p>There are a wide range of volunteer opportunities for both individuals and groups in our program. Here are a few ways you can get involved:&nbsp;</p><ul><li>Help in the Children\'s Center (Monday\'s and Thursday 6:30-8:30pm) as women attend workshops (great opportunity for high school students)&nbsp;</li><li>Prepare a dinner (especially needed on Mondays and Thursdays when women attend evening workshops)&nbsp;</li><li>Tutor/Mentor women, lead instructional readings&nbsp;</li><li>Organize child related activity (nature walks, holiday parties, cookouts or other events, art/crafts, etc.)&nbsp;</li><li>Administrative program support - clerical and organizational&nbsp;</li></ul><p>Some of the benefits of getting involved include:</p><ul><li>Undergraduate and Graduate internship opportunities&nbsp;</li><li>Lead life-skills workshops (parenting, financial planning, healthy lifestyles, etc.)</li><li>Wish-list collection, holiday gift bags, winter holiday adopt-a-family&nbsp;</li><li>Landscaping and building projects&nbsp;</li><li>Eagle Scout and Gold Award Project opportunities&nbsp;</li></ul>',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => '85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
      'use_profile' => 1,
      'profile_name' => 'ao_volunteer_commitment_form',
      'display_profile' => 0,
      'inline_title' => 'Get Involved',
    ),
    'crm_core_volunteer_node_config' => array(
      'nid' => '85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
      'wait_list' => 0,
      'sign_email' => '',
      'wait_email' => '',
    ),
    'field_cmcv_contact' => array(),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => 1379602800,
          'value2' => 1383584400,
        ),
      ),
    ),
    'field_cmcv_location' => array(
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
    'field_cmcv_roles' => array(),
    'field_cmcv_slots' => array(
      'und' => array(
        0 => array(
          'value' => 10,
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
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
    'title' => 'Assist Homeless Women and their Children',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/get-out-the-vote',
        'language' => 'und',
      ),
    ),
    'uuid' => '85b8792e-c6f0-41e1-bb04-7cbf6b522abf',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/9c84b384-91ef-438d-a442-b7aa4158823f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Come out and help at our annual fundraising dinner.

<strong>Update:</strong> All of our volunteer positions are currently filled. If you are interested in participating, sign up for the waiting list below.',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_profile_data' => array(),
    'crm_core_profile_node_config' => array(
      'nid' => '9c84b384-91ef-438d-a442-b7aa4158823f',
      'use_profile' => 1,
      'profile_name' => 'ao_volunteer_commitment_form',
      'display_profile' => 0,
      'inline_title' => 'Volunteer form',
    ),
    'crm_core_volunteer_node_config' => array(
      'nid' => '9c84b384-91ef-438d-a442-b7aa4158823f',
      'wait_list' => 0,
      'sign_email' => '',
      'wait_email' => '',
    ),
    'field_cmcv_contact' => array(),
    'field_cmcv_date' => array(
      'und' => array(
        0 => array(
          'date_type' => 'datestamp',
          'timezone' => 'America/New_York',
          'timezone_db' => 'UTC',
          'value' => 1387404000,
          'value2' => 1387404000,
        ),
      ),
    ),
    'field_cmcv_location' => array(
      'und' => array(
        0 => array(
          'administrative_area' => 'NY',
          'country' => 'US',
          'data' => NULL,
          'dependent_locality' => NULL,
          'first_name' => NULL,
          'last_name' => NULL,
          'locality' => 'New York',
          'name_line' => NULL,
          'organisation_name' => NULL,
          'postal_code' => '',
          'premise' => '',
          'sub_administrative_area' => NULL,
          'sub_premise' => NULL,
          'thoroughfare' => '',
        ),
      ),
    ),
    'field_cmcv_roles' => array(),
    'field_cmcv_slots' => array(
      'und' => array(
        0 => array(
          'value' => 2,
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
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
    'title' => 'Support the Food Bank',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcv_volunteer',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/support-the-food-bank',
        'language' => 'und',
      ),
    ),
    'uuid' => '9c84b384-91ef-438d-a442-b7aa4158823f',
  );
  $entities['cmcv_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/a6aca833-1f84-4876-93d1-cc070aad77d0',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Thank you for your volunteer commitment!',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
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
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'volunteers/thank-you',
        'language' => 'und',
      ),
    ),
    'uuid' => 'a6aca833-1f84-4876-93d1-cc070aad77d0',
  );

  return $entities;
}
