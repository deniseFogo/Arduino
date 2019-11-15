/**
 * Exemplo de uso da estrutura if else
 * @author Denise F Saldanha Fogo
 */

void setup() {
  pinMode (2, INPUT);
  pinMode (13, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH){
    digitalWrite(13, HIGH);
  }else{
    digitalWrite(13, LOW);
  }
}
