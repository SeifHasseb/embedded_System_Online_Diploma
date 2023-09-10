/*
 ============================================================================
 Name        : ex-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define Area(x) (pi*(x*x))
#define pi 3.14
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug

	float R;
	printf("Enter the radius : ");
	scanf("%f",&R);
	printf("Area = %0.2f",Area(R));
	return 0;
}
