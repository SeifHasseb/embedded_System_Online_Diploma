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

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	float x,y,z;
	printf("Enter three numbers :");
	scanf("%f%f%f",&x,&y,&z);
	if(x>y){
		if(x>z){
			printf("Largest number =%.2f",x);
		}
		else {
			printf("Largest number =%.2f",z);
		}
	}
	else {
		if(y>z)
			printf("Largest number =%.2f",y);

		else
			printf("Largest number =%.2f",z);

	}
	return 0;
}
