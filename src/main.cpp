#include <Arduino.h>

int LEDpin = 8;

void setup() {
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  digitalWrite(LEDpin, HIGH);
  delay(400);

  digitalWrite(LEDpin, LOW);
  delay(200);
}

