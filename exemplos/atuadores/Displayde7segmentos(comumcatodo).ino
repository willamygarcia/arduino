int segA = 2, segB = 3, segC = 4, segD = 5, segE = 6, segF = 7, segG = 8;

void setup() {
  int segs[] = {segA, segB, segC, segD, segE, segF, segG};
  for (int i = 0; i < 7; i++) pinMode(segs[i], OUTPUT);
}
void loop() {
  // Exibe número 3 (ativa segmentos A, B, C, D, G)
  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
  digitalWrite(segE, LOW);
  digitalWrite(segF, LOW);
  digitalWrite(segG, HIGH);
  delay(2000);
}
