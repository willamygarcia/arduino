const int pinoPIR = 2;     // Sensor de movimento PIR
const int pinoBuzzer = 3;  // Buzzer
const int pinoBotao = 4;   // Botão para ativar/desativar alarme

bool alarmeAtivo = true;

void setup() {
  pinMode(pinoPIR, INPUT);
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoBotao, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Sistema de Alarme Iniciado");
}

void loop() {
  // Alternar estado do alarme com botão
  static bool botaoAnterior = HIGH;
  bool botaoAtual = digitalRead(pinoBotao);
  if (botaoAnterior == HIGH && botaoAtual == LOW) {
    alarmeAtivo = !alarmeAtivo;
    Serial.println(alarmeAtivo ? "Alarme ATIVADO" : "Alarme DESATIVADO");
    delay(300);
  }
  botaoAnterior = botaoAtual;

  int movimento = digitalRead(pinoPIR);
  if (alarmeAtivo && movimento == HIGH) {
    digitalWrite(pinoBuzzer, HIGH);
    Serial.println("Movimento detectado!");
  } else {
    digitalWrite(pinoBuzzer, LOW);
  }
}
