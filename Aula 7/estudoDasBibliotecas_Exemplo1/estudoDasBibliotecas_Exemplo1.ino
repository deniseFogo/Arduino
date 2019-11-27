/**
 * Estudo das bibliotecas
 * Exemplo 1 Controle de um micro servo usando biblioteca interna
 * @author Denise F Saldanha Fogo
 */

// a linha abaixo inclui a biblioteca Servo
#include <Servo.h>

// a linha abaixo cria um objeto de nome servo1 usando a classe modelo Servo
Servo servo1;

void setup() {
  servo1.attach (9); //classe modelo

}

void loop() {
  servo1.write(0); //0 a 180º
  delay (500);
  servo1.write (180);
  delay (500);

}
