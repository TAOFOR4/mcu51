#include <REGX52.H>
#include <INTRINS.H>

void Delayms(unsigned int xms)	//@12.000MHz
{
	unsigned char data i, j;
	while(xms)
	{
		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
	
}


void main()
{
	while(1)
	{
		P2=0xFE;
		Delayms(100);
		P2=0xFD;
		Delayms(100);
		P2=0xFB;
		Delayms(100);
		P2=0xF7;
		Delayms(500);
		P2=0xEF;
		Delayms(500);
		P2=0xDF;
		Delayms(500);
		P2=0xBF;
		Delayms(500);
		P2=0x7F;
		Delayms(500);
	}
}