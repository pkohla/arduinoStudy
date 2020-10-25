#include "Led.h"
#define redLedPin 8
#define photoresistorPin 5
#define resistorPin 4

int analogReadPhoto = 0;
int analogReadResistor = 0;
LED led1("red", false, redLedPin);

void setup() {  
  Serial.begin(9600);
  pinMode(redLedPin, OUTPUT);
}

void loop () {
  analogReadPhoto = analogRead(photoresistorPin);
  analogReadResistor = map(analogRead(resistorPin), 1, 1023, 1, 600);
  
  Serial.println(analogReadPhoto);
  Serial.println(analogReadResistor);
  delay(500);

  if(analogReadPhoto > analogReadResistor) {
    led1.turnOn();
    Serial.println("Dioda zapalona napięcie:");
    while (analogRead(photoresistorPin) > analogReadResistor);
    delay(25);
  } else {
    led1.turnOff();    
  }
  
}
