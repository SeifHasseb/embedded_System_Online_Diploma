/*
 ============================================================================
 Name        : ex-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int m=29;
	int* ptr;
	printf("Address of m :0x%p \nContatent of m = %d\n",&m,m);
	ptr = &m;
	printf("Address of pointer ptr :0x%p\nContatent of pointer ptr = %d\n",ptr,*ptr);
	m=34;
	printf("Address of pointer ptr :0x%p\nContatent of pointer ptr = %d\n",ptr,*ptr);
	*ptr=7;
	printf("Address of m :0x%p \nContatent of m = %d\n",&m,m);

	return 0;
}
