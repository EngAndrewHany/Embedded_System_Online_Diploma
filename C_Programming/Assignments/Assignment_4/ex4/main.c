/*
 * main.c
 *
 *  Created on: Aug 14, 2022
 *      Author: Andrew Hany
 */
#include <stdio.h>

int pow (int x , int y);

void main ()
{
	int base,power,res;

	printf ("Enter base number: ");
	fflush (stdout);
	scanf("%d",&base);
	printf ("Enter power: ");
	fflush (stdout);
	scanf ("%d",&power);
	printf ("%d ^ %d = %d",base,power,pow (base,power));
}

int pow (int x , int y)
{
	int res=1,i ;

	if (y==0)
	{
		return 1;
	}
	else
	{
		for (i=y;i>0;i--)
		{
			res = res * x ;
		}
		return res;
	}
}


