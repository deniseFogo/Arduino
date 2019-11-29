/**
   Controle de estacionamento
   @author Denise F Saldanha Fogo
*/

#include <Ultrasonic.h>
Ultrasonic sonar (12, 13);
int distancia;

void setup() {
  Serial.begin (9600);
  pinMode (2, INPUT);
  pinMode (3, INPUT);

}

void loop() {
  distancia = sonar.read();
  Serial.println(distancia);
  Serial.print(""); // limpar para próxima leitura, vazio, não escreve nada
  delay (500);

  if (distancia < 10 digitalRead(2) == HIGH) {
    digitalWrite (3, HIGH);
  } else {
    digitalWrite (3, LOW);
  }
}
