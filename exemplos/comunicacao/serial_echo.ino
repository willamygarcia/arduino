// Eco serial: o que for digitado no monitor serial será repetido

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char recebido = Serial.read();
    Serial.print("Recebido: ");
    Serial.println(recebido);
  }
}
