1. Sensor de Temperatura e Umidade (DHT11/DHT22)
Tipo: Digital

Leitura: Realizada por meio de uma biblioteca (DHT.h) que comunica com o sensor por um protocolo digital proprietário via um único pino.

Pino: Um único pino de dados (ex: D2), que deve ser lido com temporização específica.

Observação: DHT11 é menos preciso e mais lento que o DHT22.

2. Sensor de Luminosidade (LDR - Light Dependent Resistor)
Tipo: Analógico

Leitura: Usado com um resistor (divisor de tensão). O valor é lido com analogRead() no pino analógico (ex: A0).

Funcionamento: A resistência da LDR varia com a luz. Mais luz → menor resistência → maior valor lido.

3. Sensor de Movimento PIR
Tipo: Digital

Leitura: Retorna HIGH (1) quando movimento é detectado e LOW (0) quando não há movimento.

Pino: Lido com digitalRead() (ex: D2).

Funcionamento: Detecta variações de radiação infravermelha passiva emitida pelo corpo humano.

4. Sensor de Chuva
Tipo: Analógico (pode ter saída digital também)

Leitura: Lido com analogRead() no pino analógico (ex: A0). Alguns modelos têm saída digital com ajuste de sensibilidade (potenciômetro).

Funcionamento: A água conduz eletricidade entre trilhas do sensor, alterando a resistência.

5. Sensor de Gás (MQ-2)
Tipo: Analógico (também possui saída digital)

Leitura: analogRead() na saída A0 para sensibilidade proporcional à concentração de gás.

Gases detectados: GLP, metano, fumaça, álcool, hidrogênio, etc.

Observação: Necessita de um tempo de aquecimento (~1-2 min).

6. Sensor Ultrassônico HC-SR04
Tipo: Digital (usa dois pinos: trigger e echo)

Leitura: Medida do tempo que o som leva para ir e voltar. Trigger envia um pulso, e Echo recebe a resposta.

Cálculo: Distância = (tempo * velocidade do som) / 2

Pinos usados: digitalWrite() para trigger, pulseIn() para echo.

7. Sensor de Chama
Tipo: Analógico (pode ter saída digital)

Leitura: analogRead() para intensidade de chama detectada, ou digitalRead() se configurado com limite.

Funcionamento: Detecta luz infravermelha emitida pelo fogo (espectro ~760 nm).

Sensível a: Luzes fortes e fontes de calor próximas.

8. Sensor de Vibração (SW-420)
Tipo: Digital

Leitura: digitalRead() – retorna HIGH se vibração for detectada.

Funcionamento: Possui um contato interno que se fecha com movimento mecânico/vibração.

Observação: Pode haver ruído se sensibilidade estiver muito alta.

9. Sensor de Batimento Cardíaco (Pulse Sensor ou KY-039)
Tipo: Analógico

Leitura: analogRead() do valor da intensidade de luz refletida pelo dedo.

Funcionamento: Mede pequenas variações no volume sanguíneo usando fotodiodo e LED.

Observação: Precisa de filtragem e suavização de sinal para análise de BPM.

10. Sensor de Nível de Água
Tipo: Analógico

Leitura: analogRead() mede a condutividade entre trilhas.

Funcionamento: Quanto mais água toca os contatos do sensor, maior o valor lido.

Observação: O sensor se oxida com o tempo; ideal para leituras rápidas ou com controle de desgaste.
