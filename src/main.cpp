#include <avr/io.h>
#include <util/delay.h>

int main(){
  // A Port 0 set to OUTPUT
  DDRA = 0b0001;

  while(1){
    // A Port 0 set to HIGH
    PORTA = 0b0001;
    _delay_ms(1000);

    // A Port 0 set to LOW
    PORTA = 0b0000;
    _delay_ms(1000);
  }
  return 0;
}
