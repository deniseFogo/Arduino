/**
   Estudo do operador lógico AND
   @author Denise F Saldanha Fogo
*/

void setup() {
  pinMode (2, INPUT);
  pinMode (3, INPUT);
  pinMode (13, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH && digitalRead (3) == HIGH) {
    digitalWrite (13, HIGH);
  } else {
    digitalWrite (13, LOW);
  }
}
