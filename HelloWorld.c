#include <stdlib.h>
#include <stdio.h>

// Prototypes
void delay_cyc( int cycles);

// Main Function
void main()
{
	while(1)
	{
		printf("Hello World!\r\n")
		delay_cyc(100);
	}
}

// Just a Generic Delay Function
void delay_cyc ( int cycles) 
	{
		while(--cycles)
			for(int i =0; i<1000; i++)
				asm("nop");
	}

