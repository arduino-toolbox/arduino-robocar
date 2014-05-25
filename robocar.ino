#include <IRremote.h>
#include <Servo.h>

#include "IR.h"
#include "SonarServo.h"

const int SERVO_PIN = 9;
const int IR_PIN = 11;

IR ir(IR_PIN);
SonarServo sonarServo(SERVO_PIN);

void setup()
{
  Serial.begin(9600);

  ir.initialize();
  sonarServo.initialize();  
}

void loop() {
  if (ir.hasPendingSignal()) {
    ir.readSignal();
  }
  
  sonarServo.doSomeTrick();
}
