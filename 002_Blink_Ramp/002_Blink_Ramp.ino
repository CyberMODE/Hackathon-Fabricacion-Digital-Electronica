/* Amigus Labs*/

int ledR = 3; // LED RED

void setup() {

  pinMode(ledR, OUTPUT);  // initialize digital pin Led Red

}

void loop() {

    for (int i = 0; i <= 255; i++) {
      analogWrite(ledR, 255 - i); // fade off Led Green
      delay(5);
    }
}
