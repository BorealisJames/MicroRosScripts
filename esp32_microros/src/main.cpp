#include <Arduino.h>

#include <micro_ros_platformio.h>
#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32.h>

#if !defined(ESP32) && !defined(TARGET_PORTENTA_H7_M7) && !defined(ARDUINO_NANO_RP2040_CONNECT)
#error This example is only avaible for Arduino Portenta, Arduino Nano RP2040 Connect and ESP32 Dev module
#endif

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){error_loop();}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){}}

#define I2C_SDA 1
#define I2C_SCL 2

// Debug macro
#define debug(x) Serial.print(x)
#define debug_ln(x) Serial.println(x)

/*
	MicroROS to connect ESP32 to ROS2 data space.
	Init a single node that has one timers and one subscriber.
	The timer publishes counter at 1hz the subscriber listens and toggles the builtin LED
 */

/* MicroROS variables */
// Test publisher stuff
rcl_publisher_t publisher;
std_msgs__msg__Int32 msg;
const char * publisher_topic_name = "/test/counter_test";

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;

rcl_node_t node;
rcl_timer_t serial_timer;

rcl_subscription_t subscriber;
const char * subscriber_topic_name = "/test/led_topic";

/* End of MicroROS variables */
IPAddress agent_ip(192, 168, 163, 93);
size_t agent_port = 8888;
char ssid[] = "rosnetwork2";
char psk[]= "sutdwifi";

// Error handle loop
void error_loop() {
  while(1) {
    delay(100);
	Serial.println("RCCHECK failed");
  }
}

void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
  RCLC_UNUSED(last_call_time);
  if (timer != NULL) 
  {
	// display the data
    msg.data++;
    RCSOFTCHECK(rcl_publish(&publisher, &msg, NULL));
	Serial.println("Publishing and incrementing counter msg!!");
  }
}

void subscription_callback(const void * msgin)
{
	const std_msgs__msg__Int32 * msg = (const std_msgs__msg__Int32 *)msgin;
	Serial.print("I have heard:");
	Serial.println(msg->data);
	if (msg->data == 0)
	{
  		digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW	
	}
	else 
	{
  		digitalWrite(LED_BUILTIN, HIGH); // turn the LED off by making the voltage LOW	
	}

}

void setup() {

	/* IMU stuff */
	// serial to display data
	Serial.begin(115200);
	Serial.println("Begin simple test");
	debug_ln(xPortGetCoreID());

  	pinMode(LED_BUILTIN, OUTPUT); 
  	digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW

	/* MicroROS stuff */ 
	set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);
	delay(2000);

	allocator = rcl_get_default_allocator();

	//create init_options
	RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

	// create node
	RCCHECK(rclc_node_init_default(&node, "micro_ros_platformio_wifi_node", "", &support));

	// create best effort publishers
	RCCHECK(rclc_publisher_init_best_effort(
	&publisher,
	&node,
	ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
	publisher_topic_name));

	// create best effort subscriber
	RCCHECK(rclc_subscription_init_best_effort(
	&subscriber, &node,
	ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32), subscriber_topic_name));

	// create a msg timer that is triggered every 1000ms
	RCCHECK(rclc_timer_init_default(
		&serial_timer,
		&support,
		RCL_MS_TO_NS(1000),
		timer_callback));

	// create executor
	RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator));
	RCCHECK(rclc_executor_add_timer(&executor, &serial_timer));	
	RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &msg, &subscription_callback, ON_NEW_DATA));
	
	msg.data = 0;

	Serial.println("Done set up");
}

void loop() {
	// Run the executor 
	uint32_t start = cpu_ll_get_cycle_count();
	RCSOFTCHECK(rclc_executor_spin(&executor));
	uint32_t end = cpu_ll_get_cycle_count();
	float time_taken = (end - start) / 240;
	debug("Time taken to complete loop ");
	debug_ln(time_taken);
	debug("MicroSeconds on port ");
	debug_ln(xPortGetCoreID());
}