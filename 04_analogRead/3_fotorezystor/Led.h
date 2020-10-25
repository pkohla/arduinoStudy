#include <Arduino.h>

class LED {
  private: 
    String name;
    byte pin;
    boolean state;
  void updateLED();

  public: 
    LED (String name, boolean state, byte pin);

    void reverseLEDState();

    void turnOn();  
    void turnOff();
 
    String getName();
};
