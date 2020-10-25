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

  void turnOn() {
    this -> state = true;
    updateLED();
  }
  
  void turnOff() {
    this -> state = false;
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
