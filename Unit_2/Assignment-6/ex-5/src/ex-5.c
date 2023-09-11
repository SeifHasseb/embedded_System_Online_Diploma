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
#include <stdio.h>
struct Exmployee{
	char name[10];
	int id;
};
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	struct Exmployee emp1 = {"Ahamed" ,31},emp2= {"Mohamed",32};
	struct Exmployee* arr[2]={&emp1,&emp2};
	struct Exmployee(*(*p)[2])=&arr;
	printf("Employee 1 name :%s\n",((*(*p)))->name);
	printf("Exmployee 1 ID :%d\n",((*(*p)))->id);
	printf("Employee 2 name :%s\n",(*(*(*p+1))).name);
	printf("Exmployee 2 ID :%d\n",(*(*(*p+1))).id);

	return 0;
}
