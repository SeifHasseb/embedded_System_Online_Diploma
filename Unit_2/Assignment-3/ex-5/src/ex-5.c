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

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int arr[100];
	int i,no,num;
	printf("Enter no of elements : ");
	scanf("%d",&no);
	for(i=0;i<no;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the elements to be searched : ");
	scanf("%d",&num);
	for(i=0;i<no;i++){
		if(arr[i]==num){
			break;			//Break the for loop ... means we find the location of the num .
		}
	}
	if (arr[i]==num){		// This if condition  because it may end the for loop without finding the num .
		printf("Number found at location = %d",i+1);
	}
	else printf("number not found");
	return 0;
}
