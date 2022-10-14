/*
 * main.c
 *
 *  Created on: Oct 14, 2022
 *      Author: Andrew Hany
 */


#include <stdio.h>


void findsizeofarray (void *p1 , void *p2 , int sizeofFirstElement)
{
	int size = (void*) p2 - (void*) p1 + sizeofFirstElement;
	printf ("the size of array is: %d \n", size );

}


int main ()
{
	int array [] = {1 , 2 , 3 , 4 , 5 };
	void* p1 = &array [0];
	void* p2 = &array [4];
	int sizeofFirstElement = sizeof(array[0]);

	printf ("the address of first element is: 0x%d \n", p1);
	printf ("the address of last  element is: 0x%d \n", p2);
	printf ("the size of first element is: %d \n", sizeofFirstElement);

	findsizeofarray(p1 , p2 , sizeofFirstElement );
	return 0 ;
}
