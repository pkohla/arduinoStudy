#define windowSwitch 7
#define greenLEDpin 8
#define redLEDpin 9 

String whitchLED = "";

void setup() {
  pinMode(windowSwitch, INPUT_PULLUP);
  pinMode(greenLEDpin, OUTPUT); //green LED
  pinMode(redLEDpin, OUTPUT); //red LED

  Serial.begin(9600);  
}


class LED {
  private: String name;
           byte pin;
           boolean state;

  public: 
  LED (String name, boolean state, byte pin) {
    this -> pin = pin;
    this -> name = name;
    this -> state = state;
  }

  void reverseLEDState() {
    this -> state = ! this -> state;
    updateLED();
  }  

  void updateLED() {
    if (state) {
      digitalWrite(pin, HIGH);
    }
    else {
      digitalWrite(pin, LOW);
    }
  }
  
  String getName() {
    return this -> name;
  }
};



LED greenLED("green", false, greenLEDpin);
LED redLED("red", false, redLEDpin);

void loop() {
  if (Serial.available() > 0) {
    whitchLED = Serial.readStringUntil('\n');    

    if (whitchLED == "green") {      
      greenLED.reverseLEDState();      
    }
    else if (whitchLED == "red") {
      redLED.reverseLEDState();
    }
    else {
      Serial.println("Niezdefiniowany kolor");
      digitalWrite(greenLEDpin, LOW);
      digitalWrite(redLEDpin, LOW);
    }
    delay(1000);
  }

}
