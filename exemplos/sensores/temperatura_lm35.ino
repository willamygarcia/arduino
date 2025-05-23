// Leitura de temperatura com sensor LM35

int pinoSensor = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(pinoSensor);
  float temperatura = (leitura * 5.0 * 100.0) / 1024.0;
  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");
  delay(1000);
}
