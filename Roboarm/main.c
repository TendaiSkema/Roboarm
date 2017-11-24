/*
 * Roboarm.c
 *
 * Created: 23.11.2017 14:20:09
 * Author : e6Rondof
 */ 

#include <avr/io.h>


int main(void)
{
	TCCR0 = (0<<WGM00)|(1<<WGM01)|(1<<COM00)|(1<<CS02)|(1<<CS00);
    TCCR1A = 0xA8;
	TCCR1B = 0x12;
	ICR1 = 20000;
	TCNT1H = 0x00;
	TCNT1L = 0x00;
	
	TCCR3A = 0xA8; 
	TCCR3B = 0x12;
	ICR3 = 20000;
	TCNT3H = 0x00;
	TCNT1L = 0x00;

	DDRA = 0x0F;
	DDRB = 0xE0;
	DDRE = 0xE0;
	DDRG = 0x1F;
		
    while (1) 
    {
		OCR0 = 100;	
    }
}

