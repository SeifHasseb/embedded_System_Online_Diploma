/*
 ============================================================================
 Name        : ex-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int x);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int x,z;
	printf ("Enter an Positive integer = ");
	scanf("%d",&x);
	z=factorial(x);
	printf("factorial of %d = %d",x,z);
	return 0;
}
int factorial(int x){
	int i ,j=1;
	for (i=x;i>0;i--){
		j*=i;
	}
	return j;
}
