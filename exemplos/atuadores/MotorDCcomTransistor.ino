int motorPin = 9;

void setup() {
  pinMode(motorPin, OUTPUT);
}
void loop() {
  analogWrite(motorPin, 128); // velocidade média (0–255)
  delay(2000);
  analogWrite(motorPin, 0); // desliga
  delay(2000);
}
