/*
 ============================================================================
 Name        : ex-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Add Two Integers

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int x,y,sum;
	printf("Enter two integers : ");
	scanf("%d%d",&x,&y);
	sum=x+y;
	printf("Sum: %d",sum);
	return 0;
}
