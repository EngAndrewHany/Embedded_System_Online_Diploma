/*
 * main.c
 *
 *  Created on: Oct 19, 2022
 *      Author: Andrew Hany
 */


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10

int longestFence(char input [], int size);

int main(void)
{
	char string[MAX] , c;
	srand(time(NULL));

	for(int i = 0 ; i < MAX ;)
	{
		c = 45 + rand() % (124 - 45 + 1); // obtain random characters
		if(c == 45 || c == 124)
		{
			string[i++] = c; // check the if c is – or |
		}
	}
	printf("String is: %s\n", string);
	printf("Longest fence = %d\n", longestFence(string, MAX));
}

int longestFence(char input [], int size)
{
	int i , counter = 1;
	for (i = 0; i<size ; i++)
	{
		if ((input[i] == '|' && input [i+1] ==  '-') || (input[i] == '-' && input [i+1] ==  '|'))
		{
			counter++;
		}
	}
	return counter;
}
