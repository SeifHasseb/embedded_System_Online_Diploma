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

void print_rev(char* ptr_str){
	int i;
	char temp = *ptr_str;
	for(;*ptr_str!='\0';ptr_str++){
	}
	ptr_str--;
	for(i=0;i<30;i++){
		printf("%c",*ptr_str);
		if(*ptr_str ==temp){
			break;
		}
		ptr_str--;
	}
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	char str[100];
	printf("Enter the string : ");
	gets(str);
	printf("Reverse string : ");

	print_rev(str);

	return 0;
}
