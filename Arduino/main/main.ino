//#include <flexSensor.h>

//#include <MPU6050_tockn.h>
//#include <Wire.h>
#include <flexSensor.h>



//MPU6050 mpu6050(Wire);

//FlexSensor* flexsensors = new FlexSensor(0,1,2,3);
//float value;
/*


int pin = 2;
void setup(){
  Serial.begin(9600);
  
  Wire.begin();
  mpu6050.begin();
  mpu6050.calcGyroOffsets(true);
  

}
void loop() {
   delay(500);
 
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
  
  value = flexsensors->getState();
  Serial.println(value);
  
  
*/
RF24 radio(7, 8);  // CE, CSN

//address through which two modules communicate.
const byte address[6] = "00001";

void setup() {
  radio.begin();
  radio.openWritingPipe(address);
  // Power amplitude level: minimum
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() {
  // Búa til data til þess að senda
  const char text[] = "Hello World";
  // Senda data
  radio.write(&text, sizeof(text));
  // Bíða 1 sec þangað til sent er aftur
  delay(1000);
}
    
