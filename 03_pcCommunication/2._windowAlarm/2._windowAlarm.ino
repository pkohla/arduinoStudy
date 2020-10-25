#define windowSwitch 7
#define greenLED 8
#define redLED 9 

void setup() {
  pinMode(windowSwitch, INPUT_PULLUP);
  pinMode(greenLED, OUTPUT); //green LED
  pinMode(redLED, OUTPUT); //red LED

  Serial.begin(9600);  
  alarmActivation();
}

void ledBlinking(int times, int delayTime) {    
  for (int i=0; i<times; i++)
    {
      digitalWrite(greenLED, HIGH);
      digitalWrite(redLED, HIGH);
      delay(delayTime);
      digitalWrite(greenLED, LOW);
      digitalWrite(redLED, LOW);
      delay(delayTime);      
    }
}

void alarmActivation(){  
    ledBlinking(5, 750);
    digitalWrite(greenLED, HIGH);
    Serial.println("Alarm aktywny");
}


void loop() { 
 
  
  if (digitalRead(windowSwitch) == LOW) {    
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
  } else {        
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
    Serial.println("Okno otwarte");
    while (digitalRead(windowSwitch) == HIGH)
    delay(25);
    
  }
}
