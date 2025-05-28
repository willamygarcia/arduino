int ldrPin = A0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(ldrPin);
  Serial.println(value);
  delay(1000);
}
