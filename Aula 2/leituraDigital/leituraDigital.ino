/**
 * Leitura digital de um interruptor simples
 * @author Denise F Saldanha Fogo
 */
 
void setup() {
 pinMode(13, OUTPUT);
 pinMode(2, INPUT);

}

void loop() {
  if (digitalRead(2)== HIGH){
    digitalWrite(13, HIGH);
  }

}
