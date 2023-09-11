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

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	char arr[26];
	char* ptr;
	int i;
	ptr=arr;
	for(i=0;i<26;i++){
		*ptr =i+'A';
		ptr++;
	}
	ptr=arr;
	printf("The Alphabets are :\n");
	for(i=0;i<26;i++){
		printf("%c  ",*ptr);
		ptr++;
	}
	return 20;
}
