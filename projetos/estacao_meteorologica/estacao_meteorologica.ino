#include <DHT.h>

#define DHTPIN 2       // Pino de dados do DHT11
#define DHTTYPE DHT11  // Tipo do sensor

DHT dht(DHTPIN, DHTTYPE);

const int pinoLDR = A0;  // Pino analógico conectado ao LDR

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Estação Meteorológica Iniciada");
}

void loop() {
  // Leitura do DHT11
  float umidade = dht.readHumidity();
  float temperatura = dht.readTemperature();

  // Verificação de falha na leitura
  if (isnan(umidade) || isnan(temperatura)) {
    Serial.println("Erro ao ler o DHT11!");
  } else {
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.print(" °C | Umidade: ");
    Serial.print(umidade);
    Serial.println(" %");
  }

  // Leitura do sensor LDR
  int valorLuz = analogRead(pinoLDR);
  Serial.print("Luminosidade: ");
  Serial.println(valorLuz);  // Varia de 0 (escuro) a 1023 (muito claro)

  Serial.println("----------------------------");
  delay(2000);  // Aguarda 2 segundos antes da próxima leitura
}
