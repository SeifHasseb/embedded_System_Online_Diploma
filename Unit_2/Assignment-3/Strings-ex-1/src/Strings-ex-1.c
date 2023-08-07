/*
 ============================================================================
 Name        : Strings-ex-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	char arr_string[100];
	char x;
	int i,y=0;
	printf("Enter a string: ");
	gets(arr_string);
	printf("Enter a character to find frequency: ");
	scanf("%c",&x);
	for (i=0;arr_string[i]!='\0';i++){
		if(x == arr_string[i]){
			y++;
		}
	}
	if(y>0){
		printf("Frequency of %c = %d",x,y);
	}
	else printf("None");
	return 0;
}
