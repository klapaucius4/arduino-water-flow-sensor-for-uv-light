#ifndef MY_WATER_H
#define MY_WATER_H

#include <Arduino.h>

class WaterFlowSensor
{
    private:
        byte pin;

    public:
        WaterFlowSensor(byte pin)
        {
            this->pin = pin;
            init();
        }

        void init()
        {
            pinMode(pin, INPUT);
        }
};

#endif
