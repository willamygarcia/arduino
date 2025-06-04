#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

// Substitua com as credenciais da sua rede Wi-Fi
const char* ssid = "NOME_DA_REDE";
const char* password = "SENHA_DA_REDE";

// URL para requisição HTTP GET
const char* url = "http://jsonplaceholder.typicode.com/posts/1";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  Serial.print("Conectando-se ao WiFi");

  // Aguarda conexão
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado!");
  Serial.print("Endereço IP: ");
  Serial.println(WiFi.localIP());

  // Faz a requisição HTTP GET
  HTTPClient http;

  http.begin(url);
  int httpCode = http.GET(); // Faz a requisição

  if (httpCode > 0) {
    Serial.printf("Código de status HTTP: %d\n", httpCode);
    String payload = http.getString();
    Serial.println("Resposta:");
    Serial.println(payload);
  } else {
    Serial.printf("Falha na requisição. Código: %s\n", http.errorToString(httpCode).c_str());
  }

  http.end(); // Libera recursos
}

void loop() {
  // Nada no loop
}
