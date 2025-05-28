# Lista Completa de Sensores para Arduino

## 🌡️ Ambientais, Climáticos e de Qualidade do Ar

### 1. Sensor de Temperatura e Umidade (DHT11/DHT22)
- **Tipo:** Digital  
- **Leitura:** Biblioteca `DHT.h` via protocolo digital proprietário  
- **Pino:** Único pino de dados (ex: D2)  
- **Observação:**  
  - DHT11: Menos preciso e mais lento  
  - DHT22: Mais preciso e maior faixa de medição  

### 2. Sensor de Qualidade do Ar (MQ-135)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Detecta:** Amônia, CO₂, fumaça, álcool, etc.  
- **Observação:** Requer aquecimento inicial (~2 min)

### 3. Sensor de Gás CO₂ (MH-Z19)
- **Tipo:** Digital  
- **Leitura:** UART  
- **Aplicação:** Monitoramento de qualidade do ar interno  

### 4. Sensor de Gás (MQ-2)
- **Tipo:** Analógico (com saída digital)  
- **Leitura:** `analogRead()` na saída A0  
- **Detecta:** GLP, metano, fumaça, álcool, hidrogênio etc.  
- **Observação:** Tempo de aquecimento necessário (~1–2 min)  

### 5. Sensor de Pressão Atmosférica (BMP180/BMP388)
- **Tipo:** Digital  
- **Leitura:** I²C  
- **Aplicação:** Estações meteorológicas, altímetros  

### 6. Sensor de Temperatura (LM35)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Aplicação:** Medição simples de temperatura  

### 7. Sensor de Temperatura (DS18B20)
- **Tipo:** Digital  
- **Leitura:** OneWire  
- **Aplicação:** Alta precisão em ambientes líquidos ou externos  

### 8. Sensor de Umidade do Solo (YL-69)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Aplicação:** Irrigação automatizada  

### 9. Sensor de Temperatura e Umidade (HTU21D)
- **Tipo:** Digital  
- **Leitura:** I²C  
- **Aplicação:** Monitoramento ambiental  

### 10. Sensor de Umidade Relativa (HIH6130)
- **Tipo:** Digital  
- **Leitura:** I²C  

---

## ☀️ Luz e Chamas

### 11. Sensor de Luminosidade (LDR)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()` com divisor de tensão  
- **Funcionamento:** Mais luz → menor resistência → maior valor  

### 12. Sensor de Chama
- **Tipo:** Analógico (com saída digital)  
- **Leitura:** `analogRead()` ou `digitalRead()`  
- **Funcionamento:** Detecta luz infravermelha (~760 nm)  
- **Observação:** Sensível a luzes e calor  

---

## 🚶 Movimento e Vibração

### 13. Sensor de Movimento PIR
- **Tipo:** Digital  
- **Leitura:** `digitalRead()` (ex: D2)  
- **Funcionamento:** Detecta radiação infravermelha humana  

### 14. Sensor de Vibração (SW-420)
- **Tipo:** Digital  
- **Leitura:** `digitalRead()`  
- **Funcionamento:** Contato interno fechado por vibração  

### 15. Sensor de Movimento PIR (HC-SR501)
- **Tipo:** Digital  
- **Leitura:** `digitalRead()`  
- **Aplicação:** Detecção de presença  

---

## 📏 Distância e Proximidade

### 16. Sensor Ultrassônico HC-SR04
- **Tipo:** Digital (dois pinos)  
- **Pinos:** `trigger` (saída), `echo` (entrada)  
- **Leitura:** `pulseIn()`  
- **Cálculo:** `distância = (tempo * velocidade do som) / 2`  

### 17. Sensor de Distância a Laser (VL53L0X)
- **Tipo:** Digital  
- **Leitura:** I²C  
- **Aplicação:** Medição precisa de curtas distâncias  

### 18. Sensor de Proximidade (VCNL4000)
- **Tipo:** Digital  
- **Leitura:** I²C  
- **Aplicação:** Interfaces interativas  

---

## 💧 Líquidos e Nível

### 19. Sensor de Chuva
- **Tipo:** Analógico (com saída digital)  
- **Leitura:** `analogRead()`  
- **Funcionamento:** Água altera a resistência entre trilhas  

### 20. Sensor de Nível de Água
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Funcionamento:** Mais água → maior condutividade  
- **Observação:** Oxidação com o tempo  

---

## ❤️ Biometria

### 21. Sensor de Batimento Cardíaco (Pulse Sensor)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Funcionamento:** Fotopletismografia (variação do volume sanguíneo)  

### 22. Sensor de Batimento Cardíaco (KY-039)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Observação:** Sinal precisa ser filtrado  

### 23. Sensor de Impressão Digital (GT-511C3)
- **Tipo:** Digital  
- **Leitura:** UART  
- **Aplicação:** Sistemas de segurança biométrica  

---

## 👆 Toque, Força e Entrada

### 24. Sensor de Toque Capacitivo (TTP223)
- **Tipo:** Digital  
- **Leitura:** `digitalRead()`  
- **Aplicação:** Substituição de botões físicos  

### 25. Sensor de Força (FSR)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Aplicação:** Pressão ou peso  

### 26. Sensor de Flexão (Flex Sensor)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Aplicação:** Luvas inteligentes, dispositivos vestíveis  

---

## 🔊 Áudio e Som

### 27. Sensor de Som (KY-038 / LM393)
- **Tipo:** Analógico / Digital  
- **Leitura:** `analogRead()` ou `digitalRead()`  
- **Aplicação:** Detecção de som ambiente  

---

## 🎛️ Diversos

### 28. Sensor Magnético (Reed Switch)
- **Tipo:** Digital  
- **Leitura:** `digitalRead()`  
- **Funcionamento:** Contato fechado com campo magnético (ímã)  

### 29. Sensor de Corrente (ACS712)
- **Tipo:** Analógico  
- **Leitura:** `analogRead()`  
- **Aplicação:** Medição de corrente em projetos elétricos  

### 30. Sensor de Inclinação (Tilt Switch)
- **Tipo:** Digital  
- **Leitura:** `digitalRead()`  
- **Aplicação:** Detecta mudança de ângulo ou movimento de inclinação  

---

Se quiser, posso transformar essa lista em PDF ou gerar exemplos de código para cada sensor!
