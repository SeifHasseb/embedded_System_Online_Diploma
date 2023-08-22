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

int prim_num(int x );

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int x,y,z;
	printf("Enter two numbers(intervals) : ");
	scanf("%d%d",&x,&y);
	printf("Prim numbers between %d and %d are : ",x,y);
	for(;x<=y;x++){
		z=prim_num(x);
		if(z!=0){
			printf("%d  ",z);
		}
	}
	return 0;
}
int prim_num(int x ){
	int i=x ;
	if((i%2 !=0)&&(i%3 !=0)&&(i%5 !=0)){
		return i;
	}
	return 0;
}
