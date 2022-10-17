/*
 * main.c
 *
 *  Created on: Oct 16, 2022
 *      Author: Andrew Hany
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 10
#define SIZE 100

int sumAllEven(const int rand_array[], int array_size);

void generateArray(int randArray[],int size, int randMin, int randMax)
{
srand(time(NULL));
int i;
for(i = 0; i< size;i++)
{
randArray[i] = randMin+ rand() % (randMax- randMin + 1);
//printf("%d \t",randArray [i]); //Print the array elements
}
}

int main(void)
{
int myArray[SIZE];
generateArray(myArray, SIZE, MIN, MAX);
printf("The sum is %d\n",sumAllEven(myArray,SIZE));
}

int sumAllEven(const int rand_array[], int array_size)
{
	int i , sum = 0 ;
	for(i = 0; i < array_size ;i++)
	{
		if (rand_array [i] % 2 == 0)
		{
			sum += rand_array[i] ;
		}
	}
	return sum;
}
