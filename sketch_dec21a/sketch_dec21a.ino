void setup() {
  for(int pin=5; pin<=6; pin++)
  {
    pinMode(pin,OUTPUT);
  }
}

void loop() {
  digitalWrite(5,HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7,LOW);
  delay(2000);
  digitalWrite(5,LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7,LOW);
  delay(2000);

  digitalWrite(5,LOW);
  digitalWrite(6, LOW);
  digitalWrite(7,HIGH);
  delay(2000);
  
  

}
