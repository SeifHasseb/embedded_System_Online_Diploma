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
#include <stdlib.h>

struct Add_dis{
	int feet;
	float inch;
};
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	struct Add_dis x1,x2,sum;
	printf("Enter the information of the 1st distance :\n");
	printf("Enter feet : ");
	scanf("%d",&x1.feet);
	printf("Enter inch :");
	scanf("%f",&x1.inch);
	printf("Enter the information of the 2st distance :\n");
	printf("Enter feet : ");
	scanf("%d",&x2.feet);
	printf("Enter inch :");
	scanf("%f",&x2.inch);
	sum.feet=x1.feet+x2.feet;
	sum.inch=x1.inch+x2.inch;
	if(sum.inch>=12){
		sum.inch=12;
		sum.feet++;
	}
	printf("Sum of distances = %d'-%0.2f\"",sum.feet,sum.inch);

	return 0;
}
