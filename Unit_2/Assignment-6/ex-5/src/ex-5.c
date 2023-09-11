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
#include <stdlib.h>
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 28bc01ec2fdf4009376a551f014852ec66ce88e1
=======

>>>>>>> 7a14721 (Pointers)
=======
>>>>>>> 4042ce6 (C-Basic)
=======
>>>>>>> fffbe5f (PointersUnit_2/Assignment-6)
<<<<<<< HEAD
=======
=======
>>>>>>> 849fa638375fc6d58c5b3374188c0e61c7489095
>>>>>>> 28bc01ec2fdf4009376a551f014852ec66ce88e1
#include <stdio.h>
struct Exmployee{
	char name[10];
	int id;
};
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> 28bc01ec2fdf4009376a551f014852ec66ce88e1
=======

>>>>>>> 7a14721 (Pointers)
=======
>>>>>>> 4042ce6 (C-Basic)
=======
>>>>>>> fffbe5f (PointersUnit_2/Assignment-6)
<<<<<<< HEAD
=======
=======
>>>>>>> 849fa638375fc6d58c5b3374188c0e61c7489095
>>>>>>> 28bc01ec2fdf4009376a551f014852ec66ce88e1
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);	//Eclipse bug
	struct Exmployee emp1 = {"Ahamed" ,31},emp2= {"Mohamed",32};
	struct Exmployee* arr[2]={&emp1,&emp2};
	struct Exmployee(*(*p)[2])=&arr;
	printf("Employee 1 name :%s\n",((*(*p)))->name);
	printf("Exmployee 1 ID :%d\n",((*(*p)))->id);
	printf("Employee 2 name :%s\n",(*(*(*p+1))).name);
	printf("Exmployee 2 ID :%d\n",(*(*(*p+1))).id);

	return 0;
}
