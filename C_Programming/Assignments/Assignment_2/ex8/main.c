/*
 * main.c
 *
 *  Created on: Jul 16, 2022
 *      Author: Andrew Hany
 */
#include <stdio.h>

void main ()
{
	//user choose operator
	char operator;
	float x,y ;
	printf ("Enter operator either + or - or * or / : ");
	fflush (stdout);
	scanf ("%c", &operator);
	fflush (stdout);

	//user enter two numbers
	printf ("Enter two numbers: ");
	fflush (stdout);
	scanf ("%f %f", &x,&y);
	fflush (stdout);

	//switch on operator
	switch (operator)
	{
	case '+':
		printf ("result = %f",x+y );
		break;
	case '-':
		printf ("result = %f",x-y );
		break;
	case '*':
		printf ("result = %f",x*y );
		break;
	case '/':
		printf ("result = %f",x/y );
		break;
	default:
		printf ("Wrong operator");
		break;
	}

}

