void setup() {
  pinMode(7, INPUT_PULLUP); //przełącznik
  Serial.begin(9600);
  Serial.println("Settings");

}

void loop() {
  delay(1000);
  while(digitalRead(7) == HIGH) {}
  Serial.println("Wcisnieto przycisk");

}
