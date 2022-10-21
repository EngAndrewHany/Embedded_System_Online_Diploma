/*
 * main.c
 *
 *  Created on: Oct 19, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 10

void HowManyChar(const char a[],int size)
{
	int i , num_counter = 0 , alpha_counter = 0 , symbol_counter = 0;
	for (i = 0 ; i < size ; i++)
	{
		if (isalpha(a[i]))
		{
			alpha_counter++ ;
		}
		else if (isalnum(a[i]))
		{
			num_counter ++ ;
		}
		else
		{
			symbol_counter++;
		}
	}
	printf("number of alphabetic characters = %d\n",alpha_counter);
	printf("number of numeric characters = %d\n",num_counter);
	printf("number of symbols characters = %d\n",symbol_counter);
}

void main ()
{
	char a[SIZE] = {'<','!','a','b','c','0','1','2','3','4'};
	HowManyChar( a , SIZE);
}
