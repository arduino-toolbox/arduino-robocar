#ifndef IR_h
#define IR_h

#include <IRremote.h>

class IR
{
  public:
    IR(int pin);
    void initialize();

    bool hasPendingSignal();
    void readSignal();
  private:
    int _pin;
    IRrecv _irrecv;
    decode_results _signalResults;
};

#endif
