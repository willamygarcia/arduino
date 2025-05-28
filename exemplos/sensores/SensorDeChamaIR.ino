int flamePin = A0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(flamePin);
  if (value < 100) {
    Serial.println("Fogo detectado!");
  } else {
    Serial.println("Sem fogo.");
  }
  delay(1000);
}
