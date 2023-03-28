#include "SPI.h"
#include "Communication.h"
#include "adxl372.h"

struct adxl372_device adxl372;
unsigned char devId;
AccelTriplet_t accel_data;

typedef struct {
  float x;
  float y;
  float z;
}acceleration_G_t;

acceleration_G_t data_G;

#define CS_PIN        10
#define CLK_PIN       12
#define MOSI_PIN      11
#define MISO_PIN      13

void setup() {
	Serial.begin(115200);
	// SPI.begin(12,11,13,10);
	SPI.begin(CLK_PIN,MISO_PIN,MOSI_PIN,CS_PIN);
	SPI.setDataMode(SPI_MODE0); //CPHA = CPOL = 0    MODE = 0
	delay(1000);

	pinMode(CS_PIN, OUTPUT);
	adxl372_Get_DevID(&adxl372, &devId);
	Serial.print("Device id: ");
	Serial.println(devId, HEX);
	adxl372_Reset(&adxl372);

	adxl372_Set_Op_mode(&adxl372, FULL_BW_MEASUREMENT);
	adxl372_Set_ODR(&adxl372, ODR_400Hz);
	adxl372_Set_BandWidth(&adxl372, BW_200Hz);
	int success = adxl372_self_test(&adxl372);
	if (success == 0 )
	{
		Serial.println("Self test succeded!");
	}
	else
	{
			Serial.println("Failed a selftest!");
	}
	// Set_Impact_Detection();
	// Perform self test

}

void loop() {

	adxl372_Get_Accel_data(&adxl372, &accel_data);
	/*Transform in G values*/
	// data_G.x = (float)accel_data.x * 100 / 1000;
	// data_G.y = (float)accel_data.y * 100 / 1000;
	// data_G.z = (float)accel_data.z * 100 / 1000;
	
	// Serial.print("X accel = "); Serial.print(data_G.x);
	// Serial.print(" Y accel = "); Serial.print(data_G.y);
	// Serial.print(" Z accel = "); Serial.println(data_G.z);

	float tmp;

	adxl372_get_z_accel(&adxl372, &tmp);
	Serial.print(" Zg  = "); Serial.println(tmp);
	delay(500);
}