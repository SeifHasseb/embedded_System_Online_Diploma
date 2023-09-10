/*
 ============================================================================
 Name        : ex-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct ST_info{
	char name[50];
	int roll;
	float marks;
};

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	struct ST_info arr[10];
	int i;
	printf("Enter information of students:\n");
	for(i=0;i<10;i++){
		arr[i].roll=i+1;
		printf("For roll number %d\n",arr[i].roll);
		printf("Enter name : ");
		scanf("%s",&arr[i].name);
		printf("Enter marks ");
		scanf("%f",&arr[i].marks);
	}
	printf("Displaying information of students:\n");
	for(i=0;i<10;i++){
		printf("Information For roll number %d\n",arr[i].roll);
		printf("Name : %s\n",arr[i].name);
		printf("Marks %0.2f\n",arr[i].marks);
	}

	return 0;
}
