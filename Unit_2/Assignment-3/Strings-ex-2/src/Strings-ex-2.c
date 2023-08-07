/*
 ============================================================================
 Name        : Strings-ex-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	char str[100];
	int i;
	printf("Enter a string : ");
	gets(str);

	for(i=0;str[i]!='\0';++i);

	printf("Length of string : %d",i);
	return 0;
}

