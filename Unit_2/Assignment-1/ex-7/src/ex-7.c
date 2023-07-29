/*
 ============================================================================
 Name        : ex-7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	float x,y;
	printf("Enter the value of a: ");
	scanf("%f",&x);
	printf("Enter the value of b: ");
	scanf("%f",&y);

	y=y+x;
	x=y-x;
	y=y-x;
	printf("After swapping, value of a = %f",x);
	printf("\nAfter swapping, value of b = %f",y);



	return 0;
}
