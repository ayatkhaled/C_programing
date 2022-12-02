#include <avr/io.h>
#include <stdio.h>
#include <avr/delay.h>
#include "BIT_CALC.h"
#include "STD_Types.h"
#include<time.h>
#include <time.h>
#include <time.h>
#include <avr/delay.h>
#define Number_0 0b00111111
#define Number_1 0b00000110
#define Number_2 0b01011011
#define Number_3 0b01001111
#define Number_4 0b01100110
#define Number_5 0b01101101
#define Number_6 0b01111101
#define Number_7 0b00000111
#define Number_8 0b01111111
#define Number_9 0b01101111
void main(void)
{
/*while(1){

 DDRA =0b11111111;

 PORTA =0b00000001;
 _delay_ms(1000);

 PORTA =0b00000010;
 _delay_ms(1000);
 PORTA =0b00000100;
  _delay_ms(1000);

  PORTA =0b00001000;
  _delay_ms(1000);
}*/
	/*DDRD=0b0000000;
	DDRA=0b11111111;
	char arr[10] = {Number_0,Number_1,Number_2,Number_3,Number_4,Number_5,Number_6,Number_7,Number_8,Number_9};
		// Group D : output
		DDRC = 255; // 255 = 0b11111111 = 0xff

		/*PORTD = 0b00111111; // represent number 0
		_delay_ms(1000);
		PORTD = 0b00000110;*/

		/*while(1){
			for(char i=0;i<10;i++){
			PORTC = arr[i];
			_delay_ms(500);

		}*/
	u8 prev;
	DDRA=0b11111111;
	DDRD=0b00000000;
	//prev=Get_Bit(PIND,0);
	while(1){

		if(Get_Bit(PIND,0)==0){
			PORTA=0b00000000;

			_delay_ms(100);}
		else
		{
			PORTA=0b00000001;
			_delay_ms(100);
		}
		if(Get_Bit(PIND,1)==0){
					PORTA=0b00000000;
					_delay_ms(100);}
				else
				{
					PORTA=0b00000010;
					_delay_ms(100);
				}
