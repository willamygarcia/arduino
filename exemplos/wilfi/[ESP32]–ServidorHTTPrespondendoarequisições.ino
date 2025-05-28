#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "NOME_DA_REDE";
const char* password = "SENHA_DA_REDE";

WebServer server(80);  // Porta 80

void handleRoot() {
  server.send(200, "text/plain", "Olá, Arduino! Aqui é o ESP32.");
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.print("Conectando");

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi conectado!");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.begin();
  Serial.println("Servidor iniciado.");
}

void loop() {
  server.handleClient();
}
