/**
   Atividade2
  Controle de um servo com botões
   @author Denise F Saldanha Fogo
*/
#include <Servo.h>
Servo servo1;

void setup() {
  servo1.attach (9);
  pinMode (2, INPUT);
  pinMode (3, INPUT);

}

void loop() {
  if (digitalRead(2) == HIGH) {
    servo1.write(0);
  }
  if (digitalRead(3) == HIGH) {
    servo1.write (180);

  }
}
