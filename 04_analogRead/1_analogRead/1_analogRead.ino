#include "Led.h"
#define redLedPin 2
#define analogReadPin 5

int analogReadValue = 0;
LED led1("red", false, redLedPin);

void setup() {  
  Serial.begin(9600);
  pinMode(redLedPin, OUTPUT);
}
 
void loop() {
  analogReadValue = analogRead(analogReadPin);
  led1.turnOn();
  delay(analogReadValue);
  led1.turnOff();
  delay(analogReadValue); 
}
