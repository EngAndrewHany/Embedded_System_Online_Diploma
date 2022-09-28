/*
 * main.c
 *
 *  Created on: Aug 28, 2022
 *      Author: Andrew Hany
 */

#include <stdio.h>


	int maxConsecutiveOnes(int x)
	{
	    // Initialize result
	    int count = 0;

	    // Count the number of iterations to
	    // reach x = 0.
	    while (x!=0)
	    {
	        // This operation reduces length
	        // of every sequence of 1s by one.
	        x = (x & (x << 1));

	        count++;
	    }

	    return count;
	}

	// Driver code
	int main()
	{
		int x;
		printf ("Enter an int number: ");
		fflush (stdout);
		scanf ("%d",&x);
	    printf ( "%d",maxConsecutiveOnes(x)) ;
	    return 0;
	}


