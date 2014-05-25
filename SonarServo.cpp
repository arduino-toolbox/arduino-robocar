#include "Arduino.h"
#include <Servo.h>

#include "SonarServo.h"

SonarServo::SonarServo(int pin)
{
  _pin = pin;
}

void SonarServo::initialize()
{
  _servo.attach(_pin);
  
  _servo.write(70);
  delay(300);
  _servo.write(110);
  delay(300);  
  _servo.write(90);

  Serial.println("SonarServo initialized");
}

void SonarServo::doSomeTrick() {
  
}
