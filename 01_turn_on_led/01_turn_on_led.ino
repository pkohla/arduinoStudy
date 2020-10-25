void setup() {
  pinMode(7, INPUT_PULLUP); //przełącznik
  pinMode(8, OUTPUT); //żółta
  pinMode(9, OUTPUT); //czerwona
  pinMode(10, OUTPUT); //zielona  
  
}

void loop() {
   
    digitalWrite(10, HIGH); //zielona on  
      
    delay(1000); 
    while (digitalRead(7) == HIGH) {}
    
    digitalWrite(10, LOW); //zielona off
    digitalWrite(8, HIGH); //żółta on
    delay(1000); 
    
    while (digitalRead(7) == HIGH) {}
    digitalWrite(8, LOW); //żółta off    
    digitalWrite(9, HIGH); //czerwona on
    
    delay(1000);     
    while (digitalRead(7) == HIGH) {}
    digitalWrite(8, HIGH); //żółta on
    
    delay(1000); 
    while (digitalRead(7) == HIGH) {}
    digitalWrite(8, LOW); //żółta off
    digitalWrite(9, LOW); //czerwona off    
  
  
  
  // put your main code here, to run repeatedly:

}
