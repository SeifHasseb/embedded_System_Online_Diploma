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
struct add_com{
	float real;
	float imag;
};
struct add_com sum_(struct add_com x1,struct add_com x2){
	struct add_com sum;
	sum.real =x1.real+x2.real;
	sum.imag =x1.imag+x2.imag;
	return sum;
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	struct add_com x1,x2,sum;
	printf("For 1st complex number \n");
	printf("Enter real and imaginary respectively : ");
	scanf("%f%f",&x1.real,&x1.imag);
	printf("For 2st complex number \n");
	printf("Enter real and imaginary respectively : ");
	scanf("%f%f",&x2.real,&x2.imag);
	sum = sum_(x1,x2);
	printf("Sum =%0.1f+%0.1fi",sum.real,sum.imag);
	return 0;
}
