/**
   Atividade 1:
   Alerta de distância (sensor ultrassônico + LED) // rio enchendo, por exemplo
*/

#include <Ultrasonic.h>


Ultrasonic sonar(12, 13);
int distancia;

void setup() {
  Serial.begin(9600);
  pinMode (8, OUTPUT);
}

void loop() {
  distancia = sonar.read();
  Serial.print("Distancia: ");
  Serial.println(distancia);
  if (distancia < 30) {
    digitalWrite (8, HIGH);
  } else {
    digitalWrite (8, LOW);
  }  
}
