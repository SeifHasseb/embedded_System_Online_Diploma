/*
 ============================================================================
 Name        : ex-7.c
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
	int x,y,sum=1;
	printf("Enter an integer : ");
	scanf("%d",&x);
	if (x>=0){
		for (y=1;y<=x;y++){
			sum*=y;
		}
		printf(" sum = %d",sum);

	}
	else printf("Error!!! Factorial of negative number dosen't exist.");
	return 0;
}
