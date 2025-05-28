#include <Stepper.h>
Stepper stepper(2048, 8, 10, 9, 11); // pinos conectados ao driver

void setup() {
  stepper.setSpeed(15); // RPM
}
void loop() {
  stepper.step(2048); // uma volta
  delay(1000);
}
