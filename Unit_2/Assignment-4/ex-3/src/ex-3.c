/*
 ============================================================================
 Name        : ex-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void rec();

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
		printf("Enter a sentence : ");
	rec();
	return 0;
}
void rec(){
	char x;

	scanf("%c",&x);
	if(x!= '\n'){
		rec();
		printf("%c",x);
	}
}
