#include <flexSensor.h>

//#include <MPU6050_tockn.h>
//#include <Wire.h>
#include <flexSensor.h>

//MPU6050 mpu6050(Wire);

FlexSensor* flexsensors = new FlexSensor(0,1,2,3);
float value;



int pin = 2;
void setup(){
  Serial.begin(9600);
  /*
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
  */

}
void loop() {
   delay(500);
  /*
  mpu6050.update();
  Serial.println("angleX : ");
  Serial.print(mpu6050.getAngleX());
  Serial.print("\tangleY : ");
  Serial.print(mpu6050.getAngleY());
  Serial.print("\tangleZ : ");
  Serial.print(mpu6050.getAngleZ());


  Serial.print("gyroAngleX : ");Serial.print(mpu6050.getGyroAngleX());
  Serial.print("\tgyroAngleY : ");Serial.print(mpu6050.getGyroAngleY());
  Serial.print("\tgyroAngleZ : ");Serial.println(mpu6050.getGyroAngleZ());
  Serial.print("analog: ");
  value = flexsensors->getState();
  Serial.println(value);
  */
  value = flexsensors->getState();
  Serial.println(value);
}
