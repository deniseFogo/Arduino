/**
 * Exemplo de uso while
 * @author Denise F Saldanha Fogo
 */

void setup() {
  Serial.begin (9600);
  int valor = 9;
  int i = 1;
  while (i <= 10){
    Serial.print (valor);
    Serial.print ("x");
    Serial.print (i);
    Serial.print (" = ");
    Serial.println (valor * i);
    i++;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
