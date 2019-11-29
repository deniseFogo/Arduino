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
  if (distancia > 10) {
    digitalWrite(3, HIGH);
    digitalWrite (2, LOW);
    Serial.println("LIVRE");
    Serial.print(""); // limpar para próxima leitura, vazio, não escreve nada
  } else {
    digitalWrite(3, LOW);
    digitalWrite (2, HIGH);
    Serial.println("OCUPADA");
    Serial.print("");
  }

  delay (500);
}
