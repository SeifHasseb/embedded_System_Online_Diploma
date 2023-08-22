/*
 ============================================================================
 Name        : ex-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power(int x,int y);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int x ,y;
	printf("Enter base number ; ");
	scanf("%d",&x);
	printf("Enter Power number (positive integer ): ");
	scanf("%d",&y);
	printf("%d^%d = %d",x,y,power(x,y));
	return 0;
}
int power(int x,int y){
	int j=1;
	for(;y>0;y--){
		j*=x;
	}
	return j;
}
