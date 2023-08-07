/*
 ============================================================================
 Name        : ex-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int data,i;
	float ava,sum;
	float arr[100];
	printf("Enter the number of data : ");
	scanf ("%d",&data);
	while(data>100||data<=0){
		printf("Error! number should in range of (0 to 100).\n");
		printf("Enter the number again : ");
		scanf ("%d",&data);
	}

	for(i=0;i<data;i++){
		printf("%d. Enter number: ",i+1);
		scanf("%f",&arr[i]);
		sum+=arr[i];

		ava=sum/(i+1);
	}
	printf("Average = %.2f",ava);
	return 0;
}
