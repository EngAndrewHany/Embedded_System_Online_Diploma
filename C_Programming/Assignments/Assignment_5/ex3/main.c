/*
 * main.c
 *
 *  Created on: Sep 27, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

struct SNumber add(struct SNumber a , struct SNumber b);

struct SNumber
{
	float real;
	float complex;
};

int main ()
{
	struct SNumber x , y , sum ;

	printf("Enter First number as A+bi: \n");
	fflush(stdout);
	scanf("%f %f", &x.real, &x.complex);

	printf("Enter second number as A+bi:\n");
	fflush(stdout);
	scanf("%f %f", &y.real, &y.complex);

	sum = add(x,y);

	printf("sum =%.2f + %.2f i",sum.real,sum.complex);

	return 0;
}

struct SNumber add(struct SNumber a ,struct SNumber b)
{
	struct SNumber  z ;

	z.real = a.real + b.real ;

	z.complex = a.complex + b.complex ;

	return z;
}
