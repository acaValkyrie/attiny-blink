// #include <avr/io.h>
// #include <util/delay.h>

// int main(){
//   // A Port 0 set to OUTPUT
//   DDRA = 0b0001;

//   while(1){
//     // A Port 0 set to HIGH
//     PORTA = 0b0001;
//     _delay_ms(1000);

//     // A Port 0 set to LOW
//     PORTA = 0b0000;
//     _delay_ms(1000);
//   }
//   return 0;
// }

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
  // digitalWrite(led_pin, HIGH);
  // delay(interval_ms);
}