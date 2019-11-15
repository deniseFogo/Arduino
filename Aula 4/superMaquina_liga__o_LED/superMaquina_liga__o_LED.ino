/**
   Super máquina
   @author Denise F Saldanha Fogo
*/

void setup() {
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (9, OUTPUT);
}

void loop() {
  int efeito = 75;
  for (int i = 9; i <= 13; i++) {
    digitalWrite (i, HIGH);
    delay (efeito);
    digitalWrite (i, LOW);
  }
  for (int i = 12; i >= 10; i--) {
    digitalWrite (i, HIGH);
    delay (efeito);
    digitalWrite (i, LOW);
  }
}
