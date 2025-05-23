#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 10
#define RST_PIN 9
MFRC522 rfid(SS_PIN, RST_PIN);

#define LED_VERDE 3
#define LED_VERMELHO 4
#define BUZZER 5

// UID permitido (modifique para o seu cartão/chaveiro)
byte uidPermitido[] = {0xDE, 0xAD, 0xBE, 0xEF};

void setup() {
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.println("Controle de Acesso Iniciado");
}

void loop() {
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) {
    return;
  }

  bool autorizado = true;
  for (byte i = 0; i < rfid.uid.size; i++) {
    if (rfid.uid.uidByte[i] != uidPermitido[i]) {
      autorizado = false;
      break;
    }
  }

  if (autorizado) {
    digitalWrite(LED_VERDE, HIGH);
    Serial.println("Acesso Permitido");
    delay(2000);
    digitalWrite(LED_VERDE, LOW);
  } else {
    digitalWrite(LED_VERMELHO, HIGH);
    digitalWrite(BUZZER, HIGH);
    Serial.println("Acesso Negado");
    delay(2000);
    digitalWrite(LED_VERMELHO, LOW);
    digitalWrite(BUZZER, LOW);
  }

  rfid.PICC_HaltA();
}
