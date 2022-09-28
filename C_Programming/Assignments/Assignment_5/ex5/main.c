/*
 * main.c
 *
 *  Created on: Sep 28, 2022
 *      Author: Andrew Hany
 */


#include <stdio.h>



void main ()
{
union a
{
	char name  [20];
	int age;
	int ho;

};
union a var ;

var.age = 0;
var.name [1]= 'G';
printf("%s ",var.name [1] );
}
