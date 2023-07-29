/*
 ============================================================================
 Name        : ex-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	float x,y,product;
	printf("Enter two numbers :");
	scanf("%f%f",&x,&y);
	product = x*y;
	printf("Product: %f",product);
	return 0;
}
