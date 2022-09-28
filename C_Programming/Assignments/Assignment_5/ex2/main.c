/*
 * main.c
 *
 *  Created on: Sep 26, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

struct distance
{
	int feet;
	float inch;
};

int main()
{
	struct distance road[2];
	int index,feet;
	float inch;
	for (index=0;index<2;index++)
	{
		printf("Enter Info  for %d distance:\n",index+1);

		printf("Enter feet: ");
		fflush(stdout);
		scanf("%d",&road[index].feet);

		printf("Enter inch: ");
		fflush(stdout);
		scanf("%f",&road[index].inch);
	}

	inch = road[0].inch + road[1].inch;
	feet = road[0].feet + road[1].feet;

	if (inch > 12.0)
	{
		feet = feet +1;
		inch = inch -12;
	}

	printf("sum of distance = %d - %.1f",feet ,inch);



return 0;
}

