//This is just a test
#include <stdio.h>

// Prototypes
void delay_cyc( int cycles);

// Main Function
void main()
{
	int counter =0;
	while(1)
	{
		counter ++;
		printf("%d. Hello World!\r\n",counter);
		delay_cyc(100);
	}
}

// Just a Generic Delay Function
void delay_cyc ( int cycles) 
	{
		while(--cycles)
		{	int i =0;
			for(i =0; i<1000; i++)
				asm("nop");
		}
	}

