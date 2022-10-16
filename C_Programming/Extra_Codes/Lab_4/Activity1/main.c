/*
 * main.c
 *
 *  Created on: Oct 15, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>
#include <ctype.h>

void print_ch(char ch , int r)
{
	int i;

	if (isalpha(ch))
	{
		for (i = 0 ; i < r ; i++)
		{
			printf ("%c",ch);
		}
	}
	else if (isalnum(ch))
	{
		for (i = 0 ; i < r ; i++)
				{
					printf ("%c\n",ch);
				}
	}
}



int main()
{
	char ch;
	int r;
	printf ("ch = ");
	fflush (stdout);
	scanf("%c", &ch);

	printf ("repeat= ");
	fflush(stdout);
	scanf("%d", &r);

	print_ch(ch , r);


	return 0 ;
}
