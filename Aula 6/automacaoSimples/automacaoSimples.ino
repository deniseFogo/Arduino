/**
   Automacao simples com arduino
   @author Denise F Saldanha Fogo
*/

void setup() {
  Serial.begin (9600);
  pinMode (13, OUTPUT);
  pinMode (12, OUTPUT);
}


void loop() {
char leitor; // char armazena o caractere
  if (Serial.available()) { // available = se tiver disponível wifi, assim evita o acionamento indevido dos dispositivos se não existir a comunicação.
    leitor = Serial.read ();
    switch (leitor) {
      case 'a':
        digitalWrite (13, !digitalRead (13));
        break;
      case 's':
        digitalWrite (12, !digitalRead (12));
        break;

}
  }
}
