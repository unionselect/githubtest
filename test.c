#include <avr/io.h>

int main(void)
{
    int Input = 0;
    DDRA = 0xff;
    DDRB = 0x00;
    DDRC = 0xff;

    PORTC = 0xff;
    

    while(1)
    {
        Input = PINB;
        if(Input & 0x01)
            PORTA = 0xff;
		else
			PORTA = 0x00;
    }
}
