/*
 * main.c
 *
 *  Created on: Aug 14, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

int factorial (int a);

void main ()
{
	int num;

	printf("Enter a positive integer: ");
	fflush (stdout);
	scanf ("%d", &num);
	factorial(num);
	printf ("Factorial of %d = %d",num,factorial(num));
}

int factorial ( int a )
{
	int i,fac=1;
	for (i=1 ;i<=a;i++)
	{
		fac=i*fac;
	}
	return fac;
}
