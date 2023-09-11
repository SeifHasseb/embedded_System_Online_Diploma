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

void Rev_num(int* ptr,int size){
	printf("Elements in the array after reverse : ");
	for(;size>0;size--){
		printf("\nelement %d : ",size);
		printf("%d",*ptr+size-1);
	}
}
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int x,i,arr[15];
	printf("Enter the number of elements * max(15 num) :");
	scanf("%d",&x);
	printf("Enter %d elements in the array : ",x);
	for(i=0;i<x;i++){
		printf("element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	Rev_num(arr,x);
	return 0;
}
