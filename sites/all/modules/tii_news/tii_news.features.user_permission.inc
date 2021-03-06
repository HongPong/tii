<?php
/**
 * @file
 * tii_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tii_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create news_article content'.
  $permissions['create news_article content'] = array(
    'name' => 'create news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_article content'.
  $permissions['delete any news_article content'] = array(
    'name' => 'delete any news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_article content'.
  $permissions['delete own news_article content'] = array(
    'name' => 'delete own news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_article content'.
  $permissions['edit any news_article content'] = array(
    'name' => 'edit any news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_article content'.
  $permissions['edit own news_article content'] = array(
    'name' => 'edit own news_article content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
