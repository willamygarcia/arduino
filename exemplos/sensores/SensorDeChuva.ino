int rainPin = A0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(rainPin);
  Serial.print("Valor de chuva: ");
  Serial.println(value);
  delay(1000);
}
