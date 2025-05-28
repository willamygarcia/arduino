int vibPin = 3;

void setup() {
  pinMode(vibPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  if (digitalRead(vibPin)) {
    Serial.println("Vibração detectada!");
  }
  delay(500);
}
