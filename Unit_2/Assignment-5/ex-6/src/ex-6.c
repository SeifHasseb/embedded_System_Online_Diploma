/*
 ============================================================================
 Name        : ex-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

union job {       //defining a union
	char name[32];
	float salary;
	int worker_no;
}u;
struct jobl {
	char name[32];
	float salary;
	int worker_no;
}s;
int main(){
	printf("size of union =%d",sizeof(u));
	printf("\nsize of structure = %d", sizeof(s));
	return 0;
}
