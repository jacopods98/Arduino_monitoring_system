void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  analogReadResolution(12);
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue*3.3/pow(2,12));
  //Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}
