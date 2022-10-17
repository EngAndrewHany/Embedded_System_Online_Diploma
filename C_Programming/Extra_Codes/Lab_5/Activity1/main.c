/*
 * main.c
 *
 *  Created on: Oct 16, 2022
 *      Author: andre
 */


#include <stdio.h>

#define true 1
#define false 0

/* Define a new type called bool using the C type int */
typedef int bool;

/* Prototype: isEven function */
bool isEven(int);

int main(void)
{
	int choice;
	bool exit = false;
	int number;

	while(!exit)
	{
		printf("Please select one of the following\n");
		printf("1- Even/Odd integer test? \n");
		printf("2- Exit...\n");
		fflush(stdout);
		scanf("%d",&choice);

		switch(choice)
		{
		case 1:
			printf("Enter a number for the test: ");
			fflush(stdout);
			scanf("%d",&number);
			if(isEven(number))
			{
				printf("%d is even.\n",number);
			}
			else
			{
				printf("%d is odd.\n",number);
			}
			break;
		case 2:
			exit = true;
			break;
		default:
			printf("Invalid entering.\n");
		}/* end switch */
	}/* end while */
}

bool isEven(int num)
{
	if (num % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
