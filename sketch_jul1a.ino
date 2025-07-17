const int potpin = 2;

void
setup() {
  Serial.begin(115200) ;
  delay(1000) ;
}


void
loop() {
  int potvalue = analogRead(potpin) ;
  //Read analog value (0-4095)

  Serial.print("Potentiometer Value: ") ;
  Serial.println(potvalue) ;
  //print the value 
  delay(200) ;
  //Delay for readability
}
