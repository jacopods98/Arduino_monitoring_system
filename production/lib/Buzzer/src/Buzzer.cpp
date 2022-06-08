/*
  Buzzer.h - Library for making the buzzer sound.
  Created by J. De Santis, April 29, 2022.
*/

#include "Arduino.h"
#include "Buzzer.h"

Buzzer::Buzzer(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Buzzer::alarm()
{
digitalWrite(_pin,HIGH);
delay(500);
digitalWrite(_pin,LOW);
delay(500);
}
