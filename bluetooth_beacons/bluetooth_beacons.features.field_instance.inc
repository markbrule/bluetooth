<?php
/**
 * @file
 * bluetooth_beacons.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function bluetooth_beacons_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-bt_beacon-field_beacon_description'.
  $field_instances['node-bt_beacon-field_beacon_description'] = array(
    'bundle' => 'bt_beacon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Human readable description for identifying the beacon',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_beacon_description',
    'label' => 'Beacon Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-bt_beacon-field_field_name'.
  $field_instances['node-bt_beacon-field_field_name'] = array(
    'bundle' => 'bt_beacon',
    'default_value' => array(
      0 => array(
        'value' => 'rssi',
      ),
    ),
    'deleted' => 0,
    'description' => 'The field name in SA to publish the RSSI value. The name of the receiver can be inserted by using the replacement pattern %RECEIVER%.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_field_name',
    'label' => 'Field Name',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-bt_beacon-field_sensor_path'.
  $field_instances['node-bt_beacon-field_sensor_path'] = array(
    'bundle' => 'bt_beacon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The sensor path from SA for this beacon',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sensor_path',
    'label' => 'Sensor Path',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-bt_beacon_detection-field_beacon'.
  $field_instances['node-bt_beacon_detection-field_beacon'] = array(
    'bundle' => 'bt_beacon_detection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The beacon that identified itself on this detection',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_beacon',
    'label' => 'Beacon',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-bt_beacon_detection-field_receiver'.
  $field_instances['node-bt_beacon_detection-field_receiver'] = array(
    'bundle' => 'bt_beacon_detection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The receiver that made this detection',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_receiver',
    'label' => 'Receiver',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-bt_beacon_detection-field_rssi'.
  $field_instances['node-bt_beacon_detection-field_rssi'] = array(
    'bundle' => 'bt_beacon_detection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Radio Signal Strength Indicator during the detection',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rssi',
    'label' => 'RSSI',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-bt_beacon_detection-field_timestamp'.
  $field_instances['node-bt_beacon_detection-field_timestamp'] = array(
    'bundle' => 'bt_beacon_detection',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_timestamp',
    'label' => 'Timestamp',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-bt_beacon_detection-field_ts'.
  $field_instances['node-bt_beacon_detection-field_ts'] = array(
    'bundle' => 'bt_beacon_detection',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The timestamp of the detection',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ts',
    'label' => 'Timestamp',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-bt_floor_plan-field_description'.
  $field_instances['node-bt_floor_plan-field_description'] = array(
    'bundle' => 'bt_floor_plan',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Description of the floor plan',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-bt_floor_plan-field_image'.
  $field_instances['node-bt_floor_plan-field_image'] = array(
    'bundle' => 'bt_floor_plan',
    'deleted' => 0,
    'description' => 'Image file for the floor plan display',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_controller_url'.
  $field_instances['node-bt_receiver-field_controller_url'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL to use for check-in function',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_controller_url',
    'label' => 'Controller URL',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_description'.
  $field_instances['node-bt_receiver-field_description'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Human readable description of the bluetooth receiver',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_ip_address'.
  $field_instances['node-bt_receiver-field_ip_address'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'IP Address of the Bluetooth receiver',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ip_address',
    'label' => 'IP Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_mqtt_address'.
  $field_instances['node-bt_receiver-field_mqtt_address'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Protocol, IP address, and port number of the MQTT queue to receive the messages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mqtt_address',
    'label' => 'MQTT Address',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_namespace'.
  $field_instances['node-bt_receiver-field_namespace'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Namespace of Eddystone beacons to accept.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_namespace',
    'label' => 'Namespace',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_network_interface'.
  $field_instances['node-bt_receiver-field_network_interface'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Name of the interface on the receiver to retrieve IP address visible from the server.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_network_interface',
    'label' => 'Network Interface',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_publish_temperature'.
  $field_instances['node-bt_receiver-field_publish_temperature'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'If "on" turn on publication of the temperature of the receiver',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_publish_temperature',
    'label' => 'Publish Temperature',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_receiver_status'.
  $field_instances['node-bt_receiver-field_receiver_status'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => array(
      0 => array(
        'value' => 'NOT_RUNNING',
      ),
    ),
    'deleted' => 0,
    'description' => 'Receiver running status, should be "RUNNING", "NOT_RUNNING", or "ERROR"',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_receiver_status',
    'label' => 'Receiver Status',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_sample_interval'.
  $field_instances['node-bt_receiver-field_sample_interval'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => array(
      0 => array(
        'value' => 2000,
      ),
    ),
    'deleted' => 0,
    'description' => 'Interval, in millisecond, to sample Bluetooth Beacon data.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sample_interval',
    'label' => 'Sample Interval',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_sample_method'.
  $field_instances['node-bt_receiver-field_sample_method'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => array(
      0 => array(
        'value' => 'mean',
      ),
    ),
    'deleted' => 0,
    'description' => 'Define the method for reporting the RSSI from a sampling interval.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sample_method',
    'label' => 'Sample Method',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_temperature_field'.
  $field_instances['node-bt_receiver-field_temperature_field'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => array(
      0 => array(
        'value' => 'Temp',
      ),
    ),
    'deleted' => 0,
    'description' => 'When publishing temperature, the field name in SA to store the measurement',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_temperature_field',
    'label' => 'Temperature Field',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_temperature_frequency'.
  $field_instances['node-bt_receiver-field_temperature_frequency'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => array(
      0 => array(
        'value' => 5000,
      ),
    ),
    'deleted' => 0,
    'description' => 'Number of milliseconds between publications of the temperature, if the temperature publication is on',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_temperature_frequency',
    'label' => 'Temperature Frequency',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-bt_receiver-field_temperature_sensor'.
  $field_instances['node-bt_receiver-field_temperature_sensor'] = array(
    'bundle' => 'bt_receiver',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'When publishing temperature of the receiver, the SA path for the temperature value',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_temperature_sensor',
    'label' => 'Temperature Sensor',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-bt_receiver_location-field_floor_plan'.
  $field_instances['node-bt_receiver_location-field_floor_plan'] = array(
    'bundle' => 'bt_receiver_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Floor plan that this location is relative to',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_floor_plan',
    'label' => 'Floor Plan',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-bt_receiver_location-field_receiver'.
  $field_instances['node-bt_receiver_location-field_receiver'] = array(
    'bundle' => 'bt_receiver_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The receiver that this location describes',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'bypass_access' => FALSE,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_receiver',
    'label' => 'Receiver',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-bt_receiver_location-field_x'.
  $field_instances['node-bt_receiver_location-field_x'] = array(
    'bundle' => 'bt_receiver_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Horizontal position of the receiver relative to the floor plan, (0,0) being the upper left corner.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_x',
    'label' => 'X',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-bt_receiver_location-field_y'.
  $field_instances['node-bt_receiver_location-field_y'] = array(
    'bundle' => 'bt_receiver_location',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Vertical position of the receiver relative to the floor plan, (0,0) being the upper left corner.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_y',
    'label' => 'Y',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-bt_symbol-field_receiver_icon'.
  $field_instances['node-bt_symbol-field_receiver_icon'] = array(
    'bundle' => 'bt_symbol',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_receiver_icon',
    'label' => 'Receiver Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'bt_planview_icons',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Beacon');
  t('Beacon Description');
  t('Controller URL');
  t('Define the method for reporting the RSSI from a sampling interval.');
  t('Description');
  t('Description of the floor plan');
  t('Field Name');
  t('Floor Plan');
  t('Floor plan that this location is relative to');
  t('Horizontal position of the receiver relative to the floor plan, (0,0) being the upper left corner.');
  t('Human readable description for identifying the beacon');
  t('Human readable description of the bluetooth receiver');
  t('IP Address');
  t('IP Address of the Bluetooth receiver');
  t('If "on" turn on publication of the temperature of the receiver');
  t('Image');
  t('Image file for the floor plan display');
  t('Interval, in millisecond, to sample Bluetooth Beacon data.');
  t('MQTT Address');
  t('Name of the interface on the receiver to retrieve IP address visible from the server.');
  t('Namespace');
  t('Namespace of Eddystone beacons to accept.');
  t('Network Interface');
  t('Number of milliseconds between publications of the temperature, if the temperature publication is on');
  t('Protocol, IP address, and port number of the MQTT queue to receive the messages.');
  t('Publish Temperature');
  t('RSSI');
  t('Receiver');
  t('Receiver Icon');
  t('Receiver Status');
  t('Receiver running status, should be "RUNNING", "NOT_RUNNING", or "ERROR"');
  t('Sample Interval');
  t('Sample Method');
  t('Sensor Path');
  t('Temperature Field');
  t('Temperature Frequency');
  t('Temperature Sensor');
  t('The Radio Signal Strength Indicator during the detection');
  t('The beacon that identified itself on this detection');
  t('The field name in SA to publish the RSSI value. The name of the receiver can be inserted by using the replacement pattern %RECEIVER%.');
  t('The receiver that made this detection');
  t('The receiver that this location describes');
  t('The sensor path from SA for this beacon');
  t('The timestamp of the detection');
  t('Timestamp');
  t('URL to use for check-in function');
  t('Vertical position of the receiver relative to the floor plan, (0,0) being the upper left corner.');
  t('When publishing temperature of the receiver, the SA path for the temperature value');
  t('When publishing temperature, the field name in SA to store the measurement');
  t('X');
  t('Y');

  return $field_instances;
}
