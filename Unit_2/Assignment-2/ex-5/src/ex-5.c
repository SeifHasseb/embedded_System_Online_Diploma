/*
 ============================================================================
 Name        : ex-5.c
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
	char x;
	printf("Enter a character: ");
	scanf("%c",&x);
	if((x>='A'&&x<='Z')||(x>='a'&& x<='z')){
		printf("%c is an alphabet",x);
	}
	else printf("%c is not an alphabet",x);

	return 0;
}
