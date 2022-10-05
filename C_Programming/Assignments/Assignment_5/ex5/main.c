/*
 * main.c
 *
 *  Created on: Sep 28, 2022
 *      Author: Andrew Hany
 */


#include <stdio.h>

#define pi 3.14

#define Area(r) (pi*r*r)

void main ()
{
	float r = 0 ;
	printf ("Enter The radius:");
	fflush(stdout);
	scanf ("%f",&r);
	printf("The Area = %.2f", Area(r));
}
