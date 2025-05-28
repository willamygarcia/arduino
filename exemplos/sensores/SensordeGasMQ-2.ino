int gasPin = A0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(gasPin);
  Serial.print("Gás detectado: ");
  Serial.println(value);
  delay(1000);
}
