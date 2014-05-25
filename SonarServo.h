#ifndef SonarServo_h
#define SonarServo_h

#include <Servo.h>

class SonarServo
{
  public:
    SonarServo(int pin);
    void initialize();
    void doSomeTrick();
  private:
    int _pin;
    Servo _servo;
};

#endif
