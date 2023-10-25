/*
 * 1-blink.c
 *
 * Created: 26.10.2023 0:23:48
 * Author : Andrey Yuskovets
 */ 

#define F_CPU 4800000U
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= (1 << (PORTB4));
    while (1) 
    {
		PORTB |= (1 << (PORTB4));
		_delay_ms(300);
		PORTB &= ~(1 << (PORTB4));
		_delay_ms(300);
		
    }
}

