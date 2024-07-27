#include <Arduino.h>

const int led_pin = 2;
const int snesor_pin = A1;

void setup(){
  pinMode(led_pin, OUTPUT);
}

const int interval_ms = 1;
void loop(){
  for(int t = 0; t < 360; t++){
    int l = 128 * sin(t * 3.14159 / 180) + 128;
    analogWrite(led_pin, l);
    delay(interval_ms);
  }
}