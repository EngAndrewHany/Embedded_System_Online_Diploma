/*
 * main.c
 *
 *  Created on: Oct 15, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numbers 30 /* Define a global variable numbers */

int main(void)
{
	int i , min, max,value, sum=0;

	printf("min = ");
	fflush (stdout);
	scanf ("%d",&min);

	printf("max = ");
	fflush (stdout);
	scanf ("%d",&max);

	srand(time(NULL)); /* Seeding the function rand() with current calendar */
	for(i = 1 ; i <= numbers; i++)
	{
		try_again:
		value = (rand() % (max - min +1)) + min;
		if (value %2==0)
		{
		printf("%d \t",value);
		sum +=	value;
		}
		else
		{
			goto try_again ;
		}
	}
	printf("Sum = %d\n", sum);
	return 0;
}
