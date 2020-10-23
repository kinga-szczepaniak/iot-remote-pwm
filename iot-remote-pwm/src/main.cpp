#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(3);              // wait for a second
  digitalWrite(2, LOW);  // turn the LED off by making the voltage LOW
  delay(1);                     // wait for a second
}