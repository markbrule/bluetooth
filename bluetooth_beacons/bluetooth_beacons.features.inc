<?php
/**
 * @file
 * bluetooth_beacons.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bluetooth_beacons_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bluetooth_beacons_node_info() {
  $items = array(
    'bt_beacon' => array(
      'name' => t('BT Beacon'),
      'base' => 'node_content',
      'description' => t('A BLE beacon'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'bt_beacon_detection' => array(
      'name' => t('BT Beacon Detection'),
      'base' => 'node_content',
      'description' => t('A detection event for a BT beacon and one specific Receiver'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bt_floor_plan' => array(
      'name' => t('BT Floor Plan'),
      'base' => 'node_content',
      'description' => t('Image to be used for display of Bluetooth beacons and receivers'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'bt_mqtt_listener' => array(
      'name' => t('BT MQTT Listener'),
      'base' => 'node_content',
      'description' => t('Process for listening in on MQTT traffic'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bt_receiver' => array(
      'name' => t('BT Receiver'),
      'base' => 'node_content',
      'description' => t('A device used to receive and decode the signals from a BLE beacon'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'bt_receiver_location' => array(
      'name' => t('BT Receiver Location'),
      'base' => 'node_content',
      'description' => t('The location on one floor plan of a beacon. Coordinates are relative to the image itself, (0,0) in the upper left corner'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bt_symbol' => array(
      'name' => t('BT Symbol'),
      'base' => 'node_content',
      'description' => t('An icon representing a single state of a receiver.'),
      'has_title' => '1',
      'title_label' => t('State'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
