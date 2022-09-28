/*
 * main.c
 *
 *  Created on: Sep 26, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

struct Student
{
	char name [50];
	int roll;
	float mark;
};

void main()
{
	struct Student student;

	printf("Enter name:");
	fflush(stdout);
	gets(student.name);

	printf("Enter roll number:");
	fflush(stdout);
	scanf("%d",&student.roll);

	printf("Enter marks:");
	fflush(stdout);
	scanf("%f",&student.mark);

	printf("*******************************\n");

	printf("Name: %s \nRoll: %d \nMarks: %f",student.name,student.roll,student.mark);
}
