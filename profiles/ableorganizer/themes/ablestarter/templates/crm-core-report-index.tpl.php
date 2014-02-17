<?php
/**
 * @file
 * Default display of reports for CRM Core
 *
 * Available variables:
 * 
 * - $report: associative array listing reports registered under the 
 *   current grouping.
 *   - title: A title for the report grouping.
 *   - reports: A list of the reports to be found. This is an array
 *     keyed by individual reports, and includes the following keys:
 *     - title: title for the report
 *     - description: a description of the report
 *     - path: a path to the report
 *   - widgets: A list of widgets indexed by CRM Core. These can be ignored
 *     in this template, or used if you want to be funny.
 */

?>
<div class="crm_core_reports">
  <div class="column_a">
		<?php foreach($column_a as $item): ?>
	  	<?php print $item; ?>
  	<?php endforeach; ?>
	</div>
	<div class="column_b">
		<?php foreach($column_b as $item): ?>
	  	<?php print $item; ?>
	  <?php endforeach; ?>
	</div>
</div>


