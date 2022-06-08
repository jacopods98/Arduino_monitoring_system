#include <Arduino.h>
#include <Buzzer.h>

Buzzer buzzer(9);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  buzzer.alarm();
}