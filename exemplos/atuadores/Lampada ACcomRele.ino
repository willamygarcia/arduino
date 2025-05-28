int relePin = 6;

void setup() {
  pinMode(relePin, OUTPUT);
}
void loop() {
  digitalWrite(relePin, LOW); // liga lâmpada
  delay(3000);
  digitalWrite(relePin, HIGH); // desliga lâmpada
  delay(3000);
}
