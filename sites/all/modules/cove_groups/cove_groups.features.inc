<?php
/**
 * @file
 * cove_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cove_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cove_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cove_groups_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('Content type for course-based or scholar-driven groups'),
      'has_title' => '1',
      'title_label' => t('Group name'),
      'help' => t('As an administrator, your first step is to create a group. Groups can take the form of either academic courses or scholar-driven projects. Once you\'ve created a group, you can then add content and users.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
