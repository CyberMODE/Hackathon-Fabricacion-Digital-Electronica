/* Amigus Labs*/

int ledR = 3; // LED RED

void setup() {

  pinMode(ledR, OUTPUT);  // initialize digital pin Led Red

}

void loop() {

  digitalWrite(ledR, HIGH);   // turn the LED Red on

  delay(1000);

  digitalWrite(ledR, LOW);   // turn the LED Red off
  
  delay(1000);

}
