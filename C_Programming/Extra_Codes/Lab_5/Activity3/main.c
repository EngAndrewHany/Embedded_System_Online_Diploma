/*
 * main.c
 *
 *  Created on: Oct 16, 2022
 *      Author: Andrew Hany
 */


#include <stdio.h>
#define SIZE 10

int howManySymbols(const char symbols[], int arraySize, char target);

int main(void)
{
/* Declare an array of chars to hold symbols */
char symbols[SIZE] = {'<','-','>','>','0','7','a','>','c','<'};
char target;
int count;
printf("Which symbol you would like to count: ");
fflush(stdout);
scanf("%c",&target);
/* Call the function howManySymbols to count the target symbol appearance in the array symbols */
count = howManySymbols(symbols,SIZE,target);
printf("There are %d of the symbol %c exist.\n",count,target);
}

int howManySymbols(const char symbols[], int arraySize, char target)
{
	int i , counter = 0;
	for (i = 0 ; i < SIZE ; i++)
	{
		if (target == symbols [i])
		{
			counter++ ;
		}
	}
	return counter;
}
