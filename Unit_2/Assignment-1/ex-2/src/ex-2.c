/*
 ============================================================================
 Name        : ex-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int x;
	printf("Enter a integer : ");
	scanf("%d",&x);
	printf("You entered : %d",x);



	return 0;
}
