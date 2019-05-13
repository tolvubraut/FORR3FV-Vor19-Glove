//
// Created by rober on 4/4/2019.
//

#include "Arduino.h"

#ifndef GLOVE_FORR3FV_FLEXSENSOR_H
#define GLOVE_FORR3FV_FLEXSENSOR_H

class FlexSensor
{
private:
    int pin1;
    int pin2;
    int pin3;
    int pin4;
    int handState[4];

public:
    FlexSensor(int pin1, int pin2, int pin3, int pin4)
    {
        this->pin1 = pin1;
        this->pin2 = pin2;
        this->pin3 = pin3;
        this->pin4 = pin4;
        this->handState[0] = pin1;
        this->handState[1] = pin2;
        this->handState[2] = pin3;
        this->handState[3] = pin4;
    };

    int FlexSensor::getPos(){

        // int handState[4] = {pin1, pin2, pin3, pin4};

    };
    int FlexSensor::getState()
    {

        // # Kóðar fyrir putta
        // handCodes = [1,2,4,8]
        //
        // # Values af puttunum
        // handState = [225, 201, 104, 230]
        //
        // # Skilgreina hvenær putti er "niðri"
        // limit = 128
        //
        // # Summa
        // sm = 0
        //
        // for i in range(4):
        //     if handState[i] > limit:
        //         sm += handCodes[i]
        // print(sm)

        int handCodes[4] = {1, 2, 4, 8};

        // int handState[4] = {pin1, pin2, pin3, pin4};

        float limit = 250;
        int sm = 0;
        for (int i = 0; i < 4; i++)
        {
            if (analogRead(handState[i]) > limit)
            {
                sm += handCodes[i];
            }
        }
        return sm;
    }
};

#endif //GLOVE_FORR3FV_FLEXSENSOR_H
