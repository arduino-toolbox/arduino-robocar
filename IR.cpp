#include "Arduino.h"
#include <IRremote.h>

#include "IR.h"

IR::IR(int pin):
	_irrecv(pin)
{
  _pin = pin;
}

void IR::initialize()
{
	_irrecv.enableIRIn();

	Serial.println("IR initialized");
}

bool IR::hasPendingSignal()
{
	return _irrecv.decode(&_signalResults);
}

void IR::readSignal()
{
	switch (_signalResults.value) {
    case 0xFF22DD:
    	Serial.println("Left");
      break;
    case 0xFFC23D:
      Serial.println("Right");
      break;
    case 0xFFFFFFFF:
    	Serial.println("Same as last...");
    	break;
    default:
    	Serial.println("Unknown!");
	}

	_irrecv.resume();
}
