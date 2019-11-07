/**
 * Acionamento de um LED
 * @author Denise F Saldanha Fogo
 */
void setup() {
  pinMode(13, OUTPUT);
  

}

void loop() {
  digitalWrite (13, HIGH);
  delay(50); //1000ms = 1s
  digitalWrite (13, LOW);
  delay(50); //1000ms = 1s
}
