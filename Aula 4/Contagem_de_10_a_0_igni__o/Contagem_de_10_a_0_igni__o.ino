/**
   Estudo do laço for
   @author Denise F Saldanha Fogo
*/

void setup() {
  Serial.begin(9600);
  for (int i = 10; i > 0; i--) {
    Serial.println (i);
    delay (1000);
  }
  Serial.println("Ignição");
}
  void loop() {
    // put your main code here, to run repeatedly:

  }
