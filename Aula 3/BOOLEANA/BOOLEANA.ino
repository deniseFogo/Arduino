/**
   Exemplo de uso da variável do tipo booleana
   @author Denise F Saldanha Fogo
*/

//Variável do tipo booleana usada como apoio a lógica
bool led = false;

void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH && led == false) {
    digitalWrite(13, HIGH);
    led = true;
  }
    if (digitalRead(2) == HIGH && led == true) {
    digitalWrite(13, LOW);
    led = false;
  }
}
