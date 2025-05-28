# Lista de Atuadores e Características

## 1. LED
- **Tipo:** Digital
- **Controle:** Liga/desliga com `digitalWrite()` ou `Pin.value()`
- **Pino:** Qualquer pino digital
- **Observação:** Pode ser controlado por PWM para brilho

---

## 2. Buzzer
- **Tipo:** Digital / PWM
- **Controle:** Tom por PWM ou apenas HIGH/LOW
- **Pino:** Qualquer pino digital
- **Observação:** Ativo = digital simples / Passivo = exige PWM

---

## 3. Servo Motor (SG90)
- **Tipo:** PWM
- **Controle:** Ângulo via pulso de 1–2 ms
- **Pino:** PWM
- **Observação:** Precisa de alimentação estável

---

## 4. Motor DC com Transistor
- **Tipo:** Analógico (PWM)
- **Controle:** Velocidade via PWM; direção com ponte H
- **Pino:** PWM
- **Observação:** Usar transistor ou ponte H

---

## 5. Relé
- **Tipo:** Digital
- **Controle:** ON/OFF
- **Pino:** Digital
- **Observação:** Ideal para cargas AC

---

## 6. Display de 7 Segmentos (comum cátodo)
- **Tipo:** Digital
- **Controle:** Cada segmento via pino
- **Pino:** 7+ pinos digitais
- **Observação:** Pode usar 74HC595 para economia de pinos

---

## 7. Display LCD 16x2 (I2C)
- **Tipo:** I2C
- **Controle:** Texto por comandos I2C
- **Pino:** SDA/SCL
- **Observação:** Requer biblioteca I2C

---

## 8. Motor de Passo (28BYJ-48)
- **Tipo:** Digital
- **Controle:** Sequência de passos
- **Pino:** 4 digitais
- **Observação:** Requer driver ULN2003

---

## 9. Lâmpada via Relé
- **Tipo:** Digital
- **Controle:** Relé on/off
- **Pino:** Digital
- **Observação:** Carga AC com segurança

---

## 10. Ventoinha com Transistor
- **Tipo:** PWM
- **Controle:** Velocidade via PWM
- **Pino:** PWM
- **Observação:** Pode exigir fonte externa

---

## 11. Módulo Vibracall
- **Tipo:** Digital / PWM
- **Controle:** Liga/desliga ou intensidade com PWM
- **Pino:** Digital/PWM
- **Observação:** Usado em notificações silenciosas

---

## 12. Módulo Peltier
- **Tipo:** Digital / PWM
- **Controle:** ON/OFF ou intensidade via PWM
- **Pino:** PWM
- **Observação:** Necessita dissipador de calor

---

## 13. Módulo Laser
- **Tipo:** Digital
- **Controle:** ON/OFF
- **Pino:** Digital
- **Observação:** Pode ser perigoso para olhos

---

## 14. Módulo de Som (DFPlayer Mini)
- **Tipo:** Serial (UART)
- **Controle:** Comandos via TX/RX
- **Pino:** UART
- **Observação:** Toca MP3 de cartão SD

---

## 15. Módulo Bluetooth (HC-05)
- **Tipo:** Serial
- **Controle:** Comandos AT + comunicação UART
- **Pino:** TX/RX
- **Observação:** Comunicação com celular ou PC

---

## 16. Módulo Wi-Fi (ESP8266)
- **Tipo:** Serial / SPI
- **Controle:** Comandos AT ou via código nativo
- **Pino:** TX/RX ou SPI
- **Observação:** Usado para conectar à Internet

---

## 17. Bomba d’água Mini (3–6V)
- **Tipo:** Digital / PWM
- **Controle:** ON/OFF ou fluxo com PWM
- **Pino:** Digital/PWM
- **Observação:** Requer fonte externa (5V)

---

## 18. Teclado Matricial 4x4
- **Tipo:** Digital
- **Controle:** Leitura de combinação linha/coluna
- **Pino:** 7 a 8 pinos digitais
- **Observação:** Usado para entrada de dados

---

## 19. RGB LED (comum ânodo ou cátodo)
- **Tipo:** PWM (3 canais)
- **Controle:** Mistura de cores com 3 PWM (R, G, B)
- **Pino:** 3 PWM
- **Observação:** Pode gerar milhares de cores

---

## 20. Módulo Joystick
- **Tipo:** Analógico + Digital
- **Controle:** Eixos X e Y (analógico) + botão (digital)
- **Pino:** 2 ADC + 1 digital
- **Observação:** Usado para controle manual

---

## 21. Módulo IR Infravermelho (transmissor)
- **Tipo:** Digital
- **Controle:** Sinais modulados para controle remoto
- **Pino:** Digital
- **Observação:** Pode enviar sinais para TVs, etc.

---

## 22. Módulo IR Receptor
- **Tipo:** Digital
- **Controle:** Decodificação de sinais infravermelhos
- **Pino:** Digital
- **Observação:** Requer biblioteca de decodificação

---

## 23. Módulo NeoPixel (WS2812)
- **Tipo:** Digital (1 fio)
- **Controle:** Protocolo proprietário com tempo preciso
- **Pino:** Digital único
- **Observação:** Controla LEDs individualmente

---

## 24. Tela OLED I2C (128x64)
- **Tipo:** I2C
- **Controle:** Texto, gráficos, imagens
- **Pino:** SDA/SCL
- **Observação:** Requer bibliotecas como `SSD1306`

---

## 25. Atuador Linear
- **Tipo:** Digital ou PWM
- **Controle:** Direção e extensão via relé ou ponte H
- **Pino:** 2 digitais ou 1 PWM
- **Observação:** Usado para abrir/fechar objetos

---

## 26. Ponte H (L298N)
- **Tipo:** Interface de controle
- **Controle:** Permite controlar motores DC/Passo
- **Pino:** 4 pinos digitais
- **Observação:** Requer lógica para direção e velocidade

---

## 27. Sirene 5V
- **Tipo:** Digital
- **Controle:** Apenas ON/OFF
- **Pino:** Digital
- **Observação:** Produz som alto (alarme)

---

## 28. Solenoide
- **Tipo:** Digital
- **Controle:** Liga/desliga campo magnético
- **Pino:** Digital
- **Observação:** Ideal para travas e atuadores mecânicos

---

## 29. Módulo Rele de Estado Sólido
- **Tipo:** Digital
- **Controle:** Liga/dispositivo AC sem partes móveis
- **Pino:** Digital
- **Observação:** Mais silencioso e durável que relé mecânico

---

## 30. Placa de LED 8x8 com MAX7219
- **Tipo:** SPI
- **Controle:** Envia dados via SPI para exibir padrões
- **Pino:** SPI (CLK, DIN, CS)
- **Observação:** Pode ser encadeada em cascata

