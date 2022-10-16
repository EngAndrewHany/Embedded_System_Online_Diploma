/*
 * main.c
 *
 *  Created on: Oct 15, 2022
 *      Author: Andrew Hany
 */


#include<stdio.h>

int min(int a, int b, int c);
int max(int a, int b, int c);

int main(void)
{
int a, b, c;
printf("Enter 3 Numbers: ");
fflush(stdout);
scanf("%d%d%d", &a, &b, &c);
printf("Min = %d\n", min(a, b, c));
printf("Max = %d\n", max(a, b, c));
}

int min(int a, int b, int c)
{
	if (a < b && a < c)
	{
		return a;
	}
	else if (b < a && b < c)
	{
		return b;
	}
	else
		return c;
}

int max(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a && b > c)
	{
		return b;
	}
	else
		return c;
}
