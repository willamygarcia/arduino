int pinoLDR = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valorLuz = analogRead(pinoLDR);
  Serial.print("Luminosidade (0-1023): ");
  Serial.println(valorLuz);
  delay(500);
}
