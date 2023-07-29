/*
 ============================================================================
 Name        : ex-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>

int main(void) {

	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	char x;
	printf("Enter a character: ");
	scanf("%c",&x);
	printf("ASCII value of %c = %d",x,x);
	return 0;
}
