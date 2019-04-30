#include "nrf24lo1.h"


void NRF::sendData(int number, float gyro) {
  
  radio.write(number,sizeof(number));
  radio.write(gyro,sizeof(gyro));
  delay(1000);
}
