int fanPin = 9;

void setup() {
  pinMode(fanPin, OUTPUT);
}
void loop() {
  analogWrite(fanPin, 200); // ventoinha rodando moderadamente
  delay(3000);
  analogWrite(fanPin, 0);   // desliga
  delay(3000);
}
