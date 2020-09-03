#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  Serial.println("starting...");
  
}

void loop() {
  int value = analogRead(A0);
  float voltage = 5.0 * value / 1024;
  Serial.println(voltage);
  delay(2000);
}