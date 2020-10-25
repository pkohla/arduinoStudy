#include "Led.h"

LED::LED (String name, boolean state, byte pin) {
    this -> pin = pin;
    this -> name = name;
    this -> state = state;
  }

void LED::reverseLEDState() {
    this -> state = ! this -> state;
    updateLED();
  }  

void LED::turnOn() {
    this -> state = true;
    updateLED();
  }
  
void LED::turnOff() {
    this -> state = false;
    updateLED();
  }

String LED::getName() {
    return this -> name;
  }

void LED::updateLED() {
    if (state) {
      digitalWrite(pin, HIGH);
    }
    else {
      digitalWrite(pin, LOW);
    }
  }
