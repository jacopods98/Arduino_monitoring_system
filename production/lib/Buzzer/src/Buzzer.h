/*
  Buzzer.h - Library for making the buzzer sound.
  Created by J. De Santis, April 29, 2022.
*/
#ifndef Buzzer_h
#define Buzzer_h

#include <Arduino.h>

class Buzzer
{
    public:
        Buzzer(int pin);
        void alarm();
    private:
        int _pin;
};
#endif