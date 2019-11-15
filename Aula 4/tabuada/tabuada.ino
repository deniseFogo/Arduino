/**
 * Estudo do for - tabuada
 * @author Denise F Saldanha Fogo
 */

void setup() {
  Serial.begin(9600);
  int valor = 7; 
  for (int i = 1; i <= 10; i++){
    Serial.print (valor); 
    Serial.print ("x");
    Serial.print (i);
    Serial.print (" = ");
    Serial.println (valor * i);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
