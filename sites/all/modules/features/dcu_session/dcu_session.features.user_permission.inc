<?php
/**
 * @file
 * dcu_session.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dcu_session_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_room'.
  $permissions['create field_room'] = array(
    'name' => 'create field_room',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_status'.
  $permissions['create field_status'] = array(
    'name' => 'create field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_time'.
  $permissions['create field_time'] = array(
    'name' => 'create field_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create session content'.
  $permissions['create session content'] = array(
    'name' => 'create session content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any session content'.
  $permissions['delete any session content'] = array(
    'name' => 'delete any session content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own session content'.
  $permissions['delete own session content'] = array(
    'name' => 'delete own session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any session content'.
  $permissions['edit any session content'] = array(
    'name' => 'edit any session content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_room'.
  $permissions['edit field_room'] = array(
    'name' => 'edit field_room',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_status'.
  $permissions['edit field_status'] = array(
    'name' => 'edit field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_time'.
  $permissions['edit field_time'] = array(
    'name' => 'edit field_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_room'.
  $permissions['edit own field_room'] = array(
    'name' => 'edit own field_room',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_status'.
  $permissions['edit own field_status'] = array(
    'name' => 'edit own field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_time'.
  $permissions['edit own field_time'] = array(
    'name' => 'edit own field_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own session content'.
  $permissions['edit own session content'] = array(
    'name' => 'edit own session content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_room'.
  $permissions['view field_room'] = array(
    'name' => 'view field_room',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_status'.
  $permissions['view field_status'] = array(
    'name' => 'view field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_time'.
  $permissions['view field_time'] = array(
    'name' => 'view field_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_room'.
  $permissions['view own field_room'] = array(
    'name' => 'view own field_room',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_status'.
  $permissions['view own field_status'] = array(
    'name' => 'view own field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_time'.
  $permissions['view own field_time'] = array(
    'name' => 'view own field_time',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
