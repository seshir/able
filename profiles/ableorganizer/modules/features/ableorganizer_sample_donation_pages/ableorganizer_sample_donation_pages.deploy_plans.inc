<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function ableorganizer_sample_donation_pages_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'cmcd_sample_content_dp';
  $plan->title = 'CRM Core Donation sample content';
  $plan->description = '';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 1;
  $plan->processor_plugin = '';
  $plan->processor_config = array();
  $plan->endpoints = array();
  $export['cmcd_sample_content_dp'] = $plan;

  return $export;
}
