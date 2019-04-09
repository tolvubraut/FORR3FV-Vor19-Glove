//
// Created by rober on 4/4/2019.
//

#include "Arduino.h"
#include <vector>

#ifndef GLOVE_FORR3FV_FLEXSENSOR_H
#define GLOVE_FORR3FV_FLEXSENSOR_H

class FlexSensor{
private:
    int pin1;
    int pin2;
    int pin3;
    int pin4;
public:
    FlexSensor(int pin1, int pin2, int pin3, int pin4){
        this->pin1 = pin1;
        this->pin2 = pin2;
        this->pin3 = pin3;
        this->pin4 = pin4;
    };

    float* getValue(){
        float temp[4] = {analogRead(pin1),analogRead(pin2),analogRead(pin3),analogRead(pin4)};
        float *tempPtr = &temp;
        Serial.println(temp[0]);
        return (tempPtr);
    };
};

#endif //GLOVE_FORR3FV_FLEXSENSOR_H
