# include "uart.h"
unsigned char string_buffer[100]="Learn-in-depth:Seif";
void main (){

	Uart_Send_String(string_buffer);

	
}