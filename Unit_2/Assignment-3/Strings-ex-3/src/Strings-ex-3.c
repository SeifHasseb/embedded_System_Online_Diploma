/*
 ============================================================================
 Name        : Strings-ex-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	char str[100];
	int i ,len;
	char temp;

	printf("Enter the string : ");
	scanf("%s",str);
	len = strlen(str)-1;
	for(i=0;i<=len;i++){
		temp=str[i];
		str[i]=str[len];
		str[len]=temp;
		len--;
	}
	printf("Reverse string is: %s",str);

	return EXIT_SUCCESS;
}
