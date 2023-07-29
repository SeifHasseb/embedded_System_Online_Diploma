/*
 ============================================================================
 Name        : ex-6.c
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
	int x,y,sum=0;
	printf("Enter an integer : ");
	scanf("%d",&x);
	for (y=0;y<=x;y++){
		sum+=y;
	}
	printf(" sum = %d",sum);
	return 0;
}
