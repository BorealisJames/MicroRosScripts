#include <Arduino.h>
#include <Wire.h>

#include <micro_ros_platformio.h>
#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32.h>
#include <geometry_msgs/msg/vector3.h>

#if !defined(ESP32) && !defined(TARGET_PORTENTA_H7_M7) && !defined(ARDUINO_NANO_RP2040_CONNECT)
#error This example is only avaible for Arduino Portenta, Arduino Nano RP2040 Connect and ESP32 Dev module
#endif

#define I2C_SDA 1
#define I2C_SCL 2

/*
	MicroROS to connect ESP32 to ROS2 data space.
	Init a single node that has 2 timers. 1 timer publishes data rate at 20hz, 1 timer to publish serial debug statements at 1hz
 */


/* MicroROS variables */
// Test publisher stuff
rcl_publisher_t publisher;
std_msgs__msg__Int32 msg;

// Accel publisher stuff
rcl_publisher_t accel_publisher;
geometry_msgs__msg__Vector3 accel_vec3_msg;

// Gyro publisher stuff
rcl_publisher_t gyro_publisher;
geometry_msgs__msg__Vector3 gyro_vec3_msg;

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
rcl_timer_t sensor_timer;
rcl_timer_t serial_timer;

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}
/* End of MicroROS variables */

/* IMU variables */
// an ICM20689 object with the ICM20689 sensor on I2C bus 0 with address 0x68
IPAddress agent_ip(192, 168, 62, 93);
size_t agent_port = 8888;

char ssid[] = "SINGTEL-61B82";
char psk[]= "0001663416";
/* End of IMU variables */

// Error handle loop
void error_loop() {
  while(1) {
    delay(100);
	Serial.println("Error kekw");
  }
}

void sensor_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) 
  {

  }
}

void serial_timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) 
  {
	// display the data
  }
}

void setup() {

	/* IMU stuff */
	// serial to display data
	Serial.begin(115200);
	Serial.println("Begin");

  	pinMode(LED_BUILTIN, OUTPUT);
  	digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW

	// start communication with IMU
	Wire.begin(I2C_SDA, I2C_SCL);
	
	/* MicroROS stuff */ 
	// set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);
	// delay(2000);

	// allocator = rcl_get_default_allocator();

	// //create init_options
	// RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

	// // create node
	// RCCHECK(rclc_node_init_default(&node, "micro_ros_platformio_wifi_node", "", &support));

	// // create publishers
	// RCCHECK(rclc_publisher_init_best_effort(
	// &publisher,
	// &node,
	// ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
	// "counter_test"));

	// RCCHECK(rclc_publisher_init_best_effort(
	// &accel_publisher,
	// &node,
	// ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Vector3),
	// "hydra1/accelerometer_values"));

	// RCCHECK(rclc_publisher_init_best_effort(
	// &gyro_publisher,
	// &node,
	// ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Vector3),
	// "hydra1/gyroscope_values"));

	// // create a sensor timer that is triggered every 50ms (20hz)
	// RCCHECK(rclc_timer_init_default(
	// 	&sensor_timer,
	// 	&support,
	// 	RCL_MS_TO_NS(50),
	// 	sensor_timer_callback));

	// // create a debug timer that is triggered every 1000ms
	// RCCHECK(rclc_timer_init_default(
	// 	&serial_timer,
	// 	&support,
	// 	RCL_MS_TO_NS(1000),
	// 	serial_timer_callback));


	// // create executor
	// RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator));
	// RCCHECK(rclc_executor_add_timer(&executor, &sensor_timer));	
	// RCCHECK(rclc_executor_add_timer(&executor, &serial_timer));

	// msg.data = 0;

	Serial.println("Done set up");
}

void loop() {
	// Run the executor 
	// RCSOFTCHECK(rclc_executor_spin(&executor));
	byte error, address;
	int nDevices;

	Serial.println("Scanning...");
	
	nDevices = 0;
	for(address = 1; address < 255; address++ )
	{
		// The i2c_scanner uses the return value of
		// the Write.endTransmisstion to see if
		// a device did acknowledge to the address.
		Wire.beginTransmission(address);
		error = Wire.endTransmission();
	
		if (error == 0)
		{
		Serial.print("I2C device found at address 0x");
		if (address<16)
			Serial.print("0");
		Serial.print(address,HEX);
		Serial.println("  !");
	
		nDevices++;
		}
		else if (error==4)
		{
		Serial.print("Unknown error at address 0x");
		if (address<16)
			Serial.print("0");
		Serial.println(address,HEX);
		}    
	}
	if (nDevices == 0)
		Serial.println("No I2C devices found\n");
	else
		Serial.println("done\n");
	
	delay(5000);           // wait 5 seconds for next scan
}