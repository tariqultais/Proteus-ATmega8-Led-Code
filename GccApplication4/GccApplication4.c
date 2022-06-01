#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= DDRB | (1<<PB1)|(1<<PB3);
	DDRC= DDRC | (1<<PC2)|(1<<PC4);
	
    while(1)
    {
		PORTB= PORTB | (1<<PB1)|(1<<PB3);
		_delay_ms(200);
		PORTC= PORTC | (1<<PC2)|(1<<PC4);
		_delay_ms(200);
		PORTB= PORTB  & ~((1<<PB1)|(1<<PB3));
		_delay_ms(200);
		PORTC= PORTC  & ~((1<<PC2)|(1<<PC4));
		_delay_ms(200);
    }
}