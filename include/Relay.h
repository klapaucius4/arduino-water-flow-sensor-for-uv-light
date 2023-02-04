#ifndef MY_RELAY_H
#define MY_RELAY_H

#include <Arduino.h>

class Relay
{
    private:
        byte pin;

    public:
        Relay(byte pin)
        {
            this->pin = pin;
            init();
        }

        void init()
        {
            pinMode(pin, OUTPUT);
        }

        void on()
        {
            digitalWrite(pin, HIGH);
        }

        void off()
        {
            digitalWrite(pin, LOW);
        }
};

#endif
