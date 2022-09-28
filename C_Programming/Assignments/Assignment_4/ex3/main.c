/*
 * main.c
 *
 *  Created on: Aug 14, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>

void reverse ();

void main ()
{
	printf ("Enter a sentence: ");
	fflush(stdout);
	reverse();
}

void reverse ()
{
	char a[50];
	gets(a);
	int i;
	for (i= strlen(a)-1 ; i >= 0 ; i--)
	{
		printf ("%c", a[i]);
	}
}
