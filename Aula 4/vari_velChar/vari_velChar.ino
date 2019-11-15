/**
 * Exemplo de uso da estrutura "do while"
 * @author Denise F Saldanha Fogo
 */

void setup() {
  Serial.begin (9600);
  randomSeed (analogRead(A0)); //referência para o "random"
  int face = random (6)+ 1; //gerador de números aleatórios (0 1 2 3 4 5); colocando " + 1", se cair 0, será 1; se cair 5, será 6. nO aRDUINO, SORTEIA ATÉ O Nº 1024.
  Serial.println ("==== JOGO DO DADO ====");
  Serial.print ("Face: ");
  Serial.println (face);
}

void loop() {
  // put your main code here, to run repeatedly:

}
