#include <SoftwareSerial.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "NOME_DA_REDE";
const char* password = "SENHA_DA_REDE";
const char* server = "http://192.168.1.100";  // IP do ESP32 (ajuste)

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  Serial.print("Conectando");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi conectado!");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;

    http.begin(server);  // Ex: http://192.168.1.100
    int httpCode = http.GET();

    if (httpCode > 0) {
      String payload = http.getString();
      Serial.println("Resposta do ESP32:");
      Serial.println(payload);
    } else {
      Serial.print("Erro: ");
      Serial.println(httpCode);
    }

    http.end();
  }

  delay(5000); // espera 5s antes de nova requisição
}
