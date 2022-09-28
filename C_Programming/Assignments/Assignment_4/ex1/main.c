/*
 * main.c
 *
 *  Created on: Aug 14, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

int prim_numbers (int a);

void main ()
{

	int num1,num2,current_num, flag ;

	printf("Enter two numbers (intervals): ");
	fflush (stdout);
	scanf ("%d %d",&num1,&num2);
	printf("prime numbers between %d and %d are: \n",num1,num2);
	for ( current_num = num1 ; current_num <= num2; current_num++)
	{
		flag = prim_numbers(current_num);
		if (flag == 0 )
			printf ("%d \n",current_num);
	}
}


int prim_numbers (int a)
{
	int i , flag = 0 ;
	for (i=2 ; i<= a/2;i++)
	{
		if (a%i == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag ;
}
