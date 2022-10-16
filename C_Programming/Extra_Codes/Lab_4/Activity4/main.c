/*
 * main.c
 *
 *  Created on: Oct 15, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

double findPower(double base, double exp); //returns the power of base to exp

int main(void)
{
double base, exp;
printf("Finding Power...\nEnter Base: ");
fflush(stdout);
scanf("%lf", &base);
printf("Enter Exponent: ");
fflush(stdout);
scanf("%lf", &exp);
printf("Result = %.4lf\n", findPower(base, exp));
}

double findPower(double base, double exp)
{
	int i ;
	double res = 1 ;
	for (i = 0 ; i < exp ; i++)
	{
		res *=base;
	}
	return res;
}
