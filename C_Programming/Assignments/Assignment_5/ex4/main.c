/*
 * main.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

struct SStudent
{
	char name [50];
	int roll ;
	float mark ;
};

void main ()
{
	struct SStudent student[10];

	int index;

	printf ("Enter information of students:\r\n");

	for (index = 0 ; index < 10 ; index++)
	{
		student[index].roll = index+1;

		printf ("For roll number: %d\n",student[index].roll);

		printf ("Enter Name:");
		fflush(stdout);
		scanf("%s",&student[index].name);

		printf ("Enter Marks:");
		fflush(stdout);
		scanf ("%f",&student[index].mark);
		printf ("\n");

	}

	printf ("********************************************\nDisplaying information:\n");
	for (index = 0 ; index < 10 ; index ++)
		{
			printf("Information for roll number %d:\nName: %s\nMarks: %.2f\n",student[index].roll,student[index].name,student[index].mark);
		}
}
