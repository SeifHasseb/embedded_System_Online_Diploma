/*
 ============================================================================
 Name        : ex-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	float x;
	printf("Enter a number: ");
	scanf("%f",&x);
	if(x==0){
		printf("You entered zero");
	}
	else {
		if(x>0){
			printf("%.2f is positive",x);
		}
		else printf("%.2f is negative",x);

	}
	return 0;
}
