#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_TEMPLATE_NAME "YourTemplateName"
#define BLYNK_AUTH_TOKEN "token"

#include <WiFi.h>            // Para ESP32; use <ESP8266WiFi.h> se for ESP8266
#include <BlynkSimpleEsp32.h> // Use BlynkSimpleEsp8266.h para ESP8266

char ssid[] = "";
char pass[] = "";
int x = 1;
int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void piscarMaisRapido() {
  digitalWrite(ledPin, HIGH);
  delay(200);
  digitalWrite(ledPin, LOW);
  delay(200);
}

void piscarMaisLento() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);
}

void loop() {
  Blynk.run(); // Mantém a conexão com o Blynk

  if (x % 2 == 0) {
    piscarMaisRapido();
    Serial.print("Valor de X é par  X = ");
    Serial.println(x);
  } else {
    piscarMaisLento();
    Serial.print("Valor de X é impar  X = ");
    Serial.println(x);
  }

  x++;
  Blynk.virtualWrite(V0, x); // Envia para o Blynk
  delay(10000); // Espera 10 segundos
}
