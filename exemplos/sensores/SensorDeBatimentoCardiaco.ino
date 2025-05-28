 //Sensor de Batimento Cardíaco (KY-039 ou Pulse Sensor)

int pulsePin = A0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int signal = analogRead(pulsePin);
  Serial.println(signal);
  delay(10);
}
