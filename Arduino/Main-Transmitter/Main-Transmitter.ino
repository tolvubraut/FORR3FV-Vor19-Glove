#include <MPU6050_tockn.h>

#include <flexSensor.h>

#include <MPU6050_tockn.h>
#include <Wire.h>

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

FlexSensor flex = FlexSensor(3, 2, 1, 0);
float value;

typedef struct
{
  int handState;
  float gyroX;
  float gyroY;
} Values;

Values data;

MPU6050 mpu6050(Wire);

RF24 radio(9, 10);
const byte address[6] = "00001";

int pin = 2;
void setup()
{

  Wire.begin();
  mpu6050.begin();
  Serial.begin(9600);
  mpu6050.calcGyroOffsets();

  radio.begin();
  radio.openWritingPipe(address);
  // Power amplitude level: minimum
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop()
{
  mpu6050.update();

  data.handState = flex.getState();
  data.gyroY = mpu6050.getAccAngleY();
  data.gyroX = mpu6050.getAccAngleX();
  Serial.println("ayy");

  // Búa til data til þess að senda
  //const char text[] = "Hello World";
  // Senda data
  radio.write(&data, sizeof(data));

  // delay(1000);
}
