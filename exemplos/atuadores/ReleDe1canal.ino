int relePin = 7;

void setup() {
  pinMode(relePin, OUTPUT);
}
void loop() {
  digitalWrite(relePin, LOW); // ativa (nível baixo geralmente aciona)
  delay(2000);
  digitalWrite(relePin, HIGH); // desativa
  delay(2000);
}
