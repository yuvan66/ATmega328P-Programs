#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main()
{
  DDRB = 0b00100000;
  PORTB = 0b00010000;
  while (1)
  {
    if ((PINB & 0b00010000)==0b00000000)
    {
      //PORTB = 0b00110000;
      PORTB = PORTB^0b00100000;
    }
  }
}

Led toggle(switch once press panna led toggle)