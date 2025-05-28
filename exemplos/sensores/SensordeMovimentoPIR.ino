int pirPin = 2;

void setup() {
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
}
void loop() {
  int motion = digitalRead(pirPin);
  if (motion) Serial.println("Movimento detectado!");
  delay(1000);
}
