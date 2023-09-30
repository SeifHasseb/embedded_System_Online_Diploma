# include "uart.h"
unsigned char string_buffer[100]="Learn-in-depth:Seif";
unsigned char string_buffer2[100]="Learn-in-depth:Seif2";
unsigned char string_buffer4[100]="Learn-in-depth:Seif4";

void main (){

	Uart_Send_String(string_buffer);

	
}