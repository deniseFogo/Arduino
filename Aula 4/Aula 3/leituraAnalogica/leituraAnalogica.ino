/**
 * Leitura analógica
 * LDR
 * @author Denise F Saldanha Fogo
 */

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldr = analogRead(A0);
  Serial.println(ldr);
if(ldr<500){
  digitalWrite(13,HIGH);
}else{
  digitalWrite(13,LOW);
}
   
}
