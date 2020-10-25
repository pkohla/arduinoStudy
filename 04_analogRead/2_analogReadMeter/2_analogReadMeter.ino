#include "Led.h"
#define redLedPin 2
#define yellowPin 3
#define greenPin 4
#define analogReadPin 5

int analogReadValue = 0;
LED led1("red", false, redLedPin);
LED led2("yellow", false, yellowPin);
LED led3("green", false, greenPin);

void setup() {  
  Serial.begin(9600);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  analogReadValue = map(analogRead(5), 0, 1023, 1, 4);

  switch(analogReadValue) {
    case 1:
      led3.turnOff();
      led2.turnOff();
      led1.turnOff();
      break;
    case 2:
      led3.turnOn();
      led2.turnOff();
      led1.turnOff();
      break;
    case 3: 
      led3.turnOn();
      led2.turnOn();
      led1.turnOff();
      break;
    case 4: 
      led3.turnOn();
      led2.turnOn();
      led1.turnOn();
      break;
    default:
      Serial.println("Nieznany zakres");
      break;
  }
  
}
