#include <MPU6050_tockn.h>
#include <Wire.h>
#include <flexSensor.h>

//MPU6050 mpu6050(Wire);

FlexSensor* flexsensors = new FlexSensor(0,1,2,3);
float *value;

int pin = 2;
void setup(){
  Serial.begin(9600);
  /*
  Wire.begin();
  mpu6050.begin();
  mpu6050.setGyroOffsets(1.45, 1.23, -1.32);
  */
}

void loop() {
  /*
  mpu6050.update();
  Serial.print("angleX : ");
  Serial.print(mpu6050.getAngleX());
  Serial.print("\tangleY : ");
  Serial.print(mpu6050.getAngleY());
  Serial.print("\tangleZ : ");
  Serial.println(mpu6050.getAngleZ());
  Serial.print("Flex sensor: ");
  */
  Serial.print("analog: ");
  value = flexsensors->getValue();
  Serial.println(value);
  delay(250);
}
