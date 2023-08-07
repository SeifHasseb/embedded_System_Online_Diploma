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
	int a,b;
	float arr_1[2][2];
	float arr_2[2][2];
	float arr_sum[2][2];
	printf("Enter the elements of the 1st matrix\n");

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Enter a%d%d : ",a+1,b+1);
			scanf("%f",&arr_1[a][b]);
		}
	}
	printf("Enter the elements of the 2st matrix\n");

	for(a=0;a<2;a++){
		for(b=0;b<2;b++){
			printf("Enter b%d%d : ",a+1,b+1);
			scanf("%f",&arr_2[a][b]);
		}
	}
	printf("Sum of Matrix : ");
	for(a=0;a<2;a++){
		printf("\n");
		for(b=0;b<2;b++){
			arr_sum[a][b]=arr_1[a][b]+arr_2[a][b];
			printf("%.1f   ",arr_sum[a][b]);
		}
	}
	return 0;
}
