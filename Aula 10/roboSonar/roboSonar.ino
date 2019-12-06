/**
   Robô desvia obstáculos
   @author Denise F Saldanha Fogo
*/


#include <Ultrasonic.h>
Ultrasonic sonar (12, 13);
int distancia;

void setup() {
  Serial.begin (9600);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
}

void loop() {
  distancia = sonar.read();
  Serial.println(distancia);
  if (distancia < 30) {
    parar();
    delay (500);
    esquerda();
    delay(300);
  } else {
    frente();
  }
}

  /* função parar */
  //analogWrite -> ativar uso do PWM na saída digital
  //analogWrite (pino, valor) valor (0 a 255)
  void parar() {
    digitalWrite (5, LOW); // se for "digital" é zero, não lê PWM
    digitalWrite (6, LOW);
    digitalWrite (9, LOW);
    digitalWrite (10, LOW);
  }
  /* função seguir em frente*/
  void frente() {
    analogWrite (5, 110);
    digitalWrite (6, LOW);
    analogWrite (9, 100);
    digitalWrite (10, LOW);
  }

  /*função ré*/
  void re() {
    analogWrite (6, 110);
    digitalWrite (5, LOW);
    analogWrite (10, 100);
    digitalWrite (9, LOW);
  }

  /*função direita*/
  void direita() {
    analogWrite (5, 110);
    digitalWrite (6, LOW);
    digitalWrite (10, LOW);
    digitalWrite (9, LOW);
  }

  /*função esquerda*/
  void esquerda() {
    analogWrite (5, LOW);
    digitalWrite (6, LOW);
    analogWrite (9, 100);
    digitalWrite (10, LOW);
  }
