/*
 ============================================================================
 Name        : ex-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	int a,b,i,j;
	int arr[100][100];
	printf("Enter row and column of matrix : ");
	scanf("%d%d",&a,&b);
	while((a>100||a<=0)||(b>100||b<0)){
		printf("Error! number of row and column should in range of (0 to 100).\n");
		printf("Enter row and column of matrix again : ");
		scanf("%d%d",&a,&b);
	}
	// Take every element of the 2D Array (matrix).

	printf("Enter elements of matrix :\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("Enter elements a%d%d :",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	// Print the Entered Array ( matrix )

	printf("Entered matrix :");
	for(i=0;i<a;i++){
		printf("\n");
		for(j=0;j<b;j++){
			printf("%d	",arr[i][j]);
		}
	}

	// Transpose the matrix .
													   	//like this			  1   2   3                   1     4
													   //                     4   5   6                   2     5
													  //	                  3     6
	printf("\nTranspose of matrix :");
	for(i=0;i<b;i++){
		printf("\n");
		for(j=0;j<a;j++){
			printf("%d	",arr[j][i]);
		}
	}

	return 0;
}
