# include "uart.h"

#define UART0DR *((volatile unsigned int*)((unsigned int*)0x101f1000)) // For A pointer acess this adress (UART0DR)

void Uart_Send_String(unsigned char* P_tx_stirng){

	while (*P_tx_stirng!= '\0'){
		UART0DR = (unsigned int)(*P_tx_stirng);
		P_tx_stirng++;
	}	
}