int waterPin = A0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(waterPin);
  Serial.print("Nível de água: ");
  Serial.println(value);
  delay(1000);
}
