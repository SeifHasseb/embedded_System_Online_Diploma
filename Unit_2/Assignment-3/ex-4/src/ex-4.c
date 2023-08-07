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

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug

	int arr[100];
	int i,no,insert,loc;
	printf("Enter no of elements : ");
	scanf("%d",&no);
	for(i=0;i<no;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	scanf("%d",&insert);
	printf("Enter the location : ");
	scanf("%d",&loc);

	// Create empty place for the new element in it's location
	for (i=no;i>=loc;i--){
		arr[i]=arr[i-1];
	}
	arr[loc-1]=insert;				// insert the new element
	no++;   					   // for the size of the new array

	for(i=0;i<no;i++){
		printf("%d	",arr[i]);
	}

	return 0;
}
