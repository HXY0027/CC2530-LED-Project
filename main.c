#include <reg51.h>

sbit LED0 = P2^0;
sbit LED1 = P2^1;

sbit KEY0 = P3^2;
sbit KEY1 = P3^3;

void delay(unsigned int i)
{
    while(i--);
}

void LED_Init(void)
{
    LED0 = 1;
    LED1 = 0;
}

void KEY_Init(void)
{
    KEY0 = 1;
    KEY1 = 1;
}

void main(void)
{
		
		KEY_Init();
		LED_Init();
		
    while(1)
{
				
        LED0 =~LED0;
				LED1 =~LED1;
        delay(50000);
};
}
