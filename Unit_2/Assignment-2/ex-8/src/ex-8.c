/*
 ============================================================================
 Name        : ex-8.c
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
	char x ; float a,b;
	printf("Enter operator either + or - or * or divide : ");
	scanf("%c",&x);
	printf("Enter two operands: ");
	scanf("%f%f",&a,&b);

	switch (x){

	case '+':
		printf("%.2f + %.2f = %.2f",a,b,a+b);
		break;
	case '-':
		printf("%.2f - %.2f = %.2f",a,b,a-b);
		break;
	case '*':
		printf("%.2f * %.2f = %.2f",a,b,a*b);
		break;
	case '/':
		printf("%.2f / %.2f = %.2f",a,b,a/b);
		break;
	default:
		printf("Error! operator is not correct");
	}
	return 0;
}
