#include <Arduino.h>
uint8_t red = 26;
uint8_t green = 25;
uint8_t blue = 17; 

void setup()
{
  // put your setup code here, to run once:
  ledcAttachPin(red, 1); // assign RGB led pins to channels
  ledcAttachPin(green, 2);
  ledcAttachPin(blue, 3);

  ledcSetup(1, 600, 8); // 12 kHz PWM, 8-bit resolution
  ledcSetup(2, 600, 8);
  ledcSetup(3, 600, 8);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledcWrite(1, 130);
  ledcWrite(2, 100);
  ledcWrite(3, 160);
  delay(2000);
  
}

