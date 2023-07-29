/*
 ============================================================================
 Name        : ex-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	float x,y,temp;
	printf("Enter the value of a: ");
	scanf("%f",&x);
	printf("Enter the value of b: ");
	scanf("%f",&y);

	temp=x;
	x=y;
	y=temp;
	printf("After swapping, value of a = %f",x);
	printf("\nAfter swapping, value of b = %f",y);


	return 0;
}
