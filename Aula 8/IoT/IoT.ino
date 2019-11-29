/**
 * IoT - Leitura de um sensor no APP
 * @author Denise F Saldanha Fogo
 */

#include <Ultrasonic.h>
Ultrasonic sonar (12,13);
int distancia;

void setup() {
  Serial.begin (9600);
}

void loop() {
  distancia = sonar.read();
  Serial.println(distancia);
  Serial.print("");
  delay (500);

}
