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
#include <stdlib.h>
struct STinfo{
	char name[50];
	int roll;
	float markes;
};
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	struct STinfo x;
	printf("Enter the information of students : \n\nEnter name : ");
	scanf("%s",&x.name);
	printf("Enter roll number : ");
	scanf("%d",&x.roll);
	printf("Enter marks : ");
	scanf("%f",&x.markes);
	printf("\nDisplay Information\nName : %s\nRoll : %d\nMarkes : %0.1f",x.name,x.roll,x.markes);



	return 0;
}
