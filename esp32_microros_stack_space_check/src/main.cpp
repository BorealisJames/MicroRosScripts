#include <Arduino.h>

#include <micro_ros_platformio.h>
#include <stdio.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <geometry_msgs/msg/vector3.h> // ros_msgs

// Multicore esp32 stack space test
// https://www.freertos.org/uxTaskGetStackHighWaterMark.html

rcl_subscription_t subscriber;
geometry_msgs__msg__Vector3 msg;
rclc_executor_t executor;
rcl_allocator_t allocator;
rclc_support_t support;
rcl_node_t node;

UBaseType_t before_init_task;
UBaseType_t after_init_task;

// Core definitions (assuming you have dual-core ESP32)
static const BaseType_t pro_cpu = 0; // wifi_core
static const BaseType_t app_cpu = 1;

#if !defined(ESP32) && !defined(TARGET_PORTENTA_H7_M7) && !defined(ARDUINO_NANO_RP2040_CONNECT)
#error This example is only avaible for Arduino Portenta, Arduino Nano RP2040 Connect and ESP32 Dev module
#endif

#define RCCHECK(fn)                  \
	{                                \
		rcl_ret_t temp_rc = fn;      \
		if ((temp_rc != RCL_RET_OK)) \
		{                            \
			error_loop();            \
		}                            \
	}
#define RCSOFTCHECK(fn)              \
	{                                \
		rcl_ret_t temp_rc = fn;      \
		if ((temp_rc != RCL_RET_OK)) \
		{                            \
		}                            \
	}

#define I2C_SDA 1
#define I2C_SCL 2

// Debug macro
#define debug(x) Serial.print(x)
#define debug_ln(x) Serial.println(x)

IPAddress agent_ip(192, 168, 163, 93);
size_t agent_port = 8888;
char ssid[] = "rosnetwork2";
char psk[] = "sutdwifi";

void error_loop()
{
	while (1)
	{
		digitalWrite(BUILTIN_LED, !digitalRead(BUILTIN_LED));
		delay(100);
	}
}

void subscription_callback(const void *msgin)
{
	const geometry_msgs__msg__Vector3 *msg = (const geometry_msgs__msg__Vector3 *)msgin;
	Serial.println("Recived message");
	Serial.println(msg->x);
	Serial.println(msg->y);
	Serial.println(msg->z);

	//   digitalWrite(BUILTIN_LED, (msg->linear.x == 0) ? LOW : HIGH);
}

void doTask0(void *parameters)
{
	// Checking Stack Space
    UBaseType_t before_performing_task;
    UBaseType_t after_performing_task;
	/* Inspect our own high water mark on entering the task. 
	* uxTaskGetStackHighWaterMark() returns the minimum amount of remaining stack space that was available
	*/

	before_performing_task = uxTaskGetStackHighWaterMark( NULL );
	while (1)
	{
		debug("Stack space before performing task: ");
		debug(before_performing_task);
		debug_ln(" bytes");
		rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
		/* Calling the function will have used some stack space, we would 
		therefore now expect uxTaskGetStackHighWaterMark() to return a 
		value lower than when it was called on entering the task. */
		after_performing_task = uxTaskGetStackHighWaterMark( NULL );
		debug("Stack space after performing task: ");
		debug(after_performing_task);
		debug_ln(" bytes");
		debug("Stack space used: ");
		debug(before_performing_task - after_performing_task);
		debug_ln(" bytes");
	}
}

void doTask1(void *parameters)
{
	while (1)
	{
		debug("****Stack space before init tasks: ");
		debug(before_init_task);
		debug_ln(" bytes");
		debug("****Stack space after init tasks: ");
		debug(after_init_task);
		debug_ln(" bytes");
		debug("****Stack space used: ");
		debug(before_init_task - after_init_task);
		debug_ln(" bytes");

		digitalWrite(BUILTIN_LED, HIGH);
    	vTaskDelay(1000 / portTICK_PERIOD_MS);
		digitalWrite(BUILTIN_LED, LOW);
    	vTaskDelay(1000 / portTICK_PERIOD_MS);
	}
}

void setup()
{
	Serial.begin(115200);
	set_microros_wifi_transports(ssid, psk, agent_ip, agent_port);
	pinMode(BUILTIN_LED, OUTPUT);
	digitalWrite(BUILTIN_LED, HIGH);

	allocator = rcl_get_default_allocator();

	// create init_options
	RCCHECK(rclc_support_init(&support, 0, NULL, &allocator));

	// create node
	RCCHECK(rclc_node_init_default(&node, "micro_ros_arduino_node", "", &support));

	// create subscriber
	RCCHECK(rclc_subscription_init_best_effort(
		&subscriber,
		&node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Vector3),
		"micro_ros_arduino_Vector3_subscriber"));

	// create executor
	RCCHECK(rclc_executor_init(&executor, &support.context, 1, &allocator));
	RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &msg, &subscription_callback, ON_NEW_DATA));
	Serial.println("Finish setup");

	before_init_task = uxTaskGetStackHighWaterMark( NULL );
	xTaskCreatePinnedToCore(doTask0,
							"Task 0",
							200000, // 200 000bytes
							NULL,
							1,
							NULL,
							pro_cpu);

	// Start Task 1 (in Core 1)
	xTaskCreatePinnedToCore(doTask1,
							"Task 1",
							6000, // 6000 byte
							NULL,
							1,
							NULL,
							app_cpu);

	after_init_task = uxTaskGetStackHighWaterMark( NULL );
	// Delete loop
	Serial.println("Finished set up");
	vTaskDelete(NULL);
}

void loop()
{

}