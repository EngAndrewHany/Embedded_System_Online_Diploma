/*
 * main.c
 *
 *  Created on: Oct 6, 2022
 *      Author: Andrew Hany
 */


#include <stdio.h>
#include <stdlib.h>
#define size 5

void fill_array (int matrix [] [5], int row , int column)
{
	int i , j  ;

	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			if (i == j)
			{
				matrix [i] [j] = 1;
			}
			if (i > j )
			{
				matrix [i] [j] = (rand() % (15 - -15 +1)) + -15 ;
			}
			printf("%d \t ", matrix[i][j]);
		}
		printf("\n");
	}

}


void sum_row (int matrix [] [5], int row , int column , int sum_row)
{
	int i , j  ,sum = 0;

	for(i=sum_row ; ; )
	{
		for(j=0; j<column; j++)
		{
			sum += matrix [i][j];
		}
		printf("sum of row %d = %d \n",sum_row , sum);
		break;
	}

}


void sum_column (int matrix [] [5], int row , int column , int sum_column)
{
	int i , j  ,sum = 0;

	for(j= sum_column ;  ; )
	{
		for(i=0; i< row; i++)
		{
			sum += matrix [i][j];
		}
		printf("sum of column %d = %d \n",sum_column , sum);
		break;
	}
}

int main()
{
	int matrix[size][size] = { 0 };
	int row , column;

	fill_array(matrix , size , size );

	printf("\nWhich row you would like to sum: ");
	fflush(stdout);
	scanf("%d",&row);

	sum_row(matrix , size , size , row );

	printf("\nWhich column you would like to sum: ");
	fflush(stdout);
	scanf("%d",&column);

	sum_column(matrix , size , size , column );

	return 0;
}





