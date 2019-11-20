/**
 * Estudo das estruturas de controle condicional
 * @author Denise F Saldanha Fogo
 */

void setup() {
 Serial.begin(9600);
 int idade = 19;
 if(idade < 18){
 Serial.print("Menor de idade");
 }else{
  Serial.print("Maior de idade");
 }
}
void loop() {
  // put your main code here, to run repeatedly:

}
