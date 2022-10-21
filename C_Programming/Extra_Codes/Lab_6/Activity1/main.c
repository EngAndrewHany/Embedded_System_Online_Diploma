/*
 * main.c
 *
 *  Created on: Oct 19, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

#define CHARS 9

int countParks(char array[], int size)
{
	int i , counter = 0;

	for (i = 0 ; i < size ; i++)
	{
		if (array[i] ==  '-')
		{
			if (array [i+1] != 'B' &&  array [i-1] != 'B')
			{
				counter++ ;
			}
		}
	}

	return counter ;
}

int main(void)
{
	char parks[CHARS]= "O-N-NO-B-";
	printf("Number of parks = %d\n", countParks(parks, CHARS));
}


