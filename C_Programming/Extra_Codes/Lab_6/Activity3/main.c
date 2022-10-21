/*
 * main.c
 *
 *  Created on: Oct 19, 2022
 *      Author: Andrew Hany
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROWS 5 // maximum row length
#define COLS 5 // maximum column length
#define MIN -10 // minimum number to fill the matrix
#define MAX 10 // maximum number to fill the matrix

/* prototypes */
void fillMatrix(int matrix[][5], int rows, int min, int max);
void printUnitUpperTriangular(int matrix[][5], int rows);
int sumRow(int matrix[][5], int rows, int c_row);
int sumColumn(int matrix[][5], int rows, int c_col);

int main()
{
	int matrix [ROWS][COLS]; // define matrix
	fillMatrix(matrix, ROWS, MIN, MAX); // call function to fill the matrix
	printUnitUpperTriangular(matrix, ROWS); // print the matrix once filled
	int choice;
	printf("Which row you would like to sum: ");
	fflush(stdout);
	scanf("%d",&choice);
	sumRow(matrix, ROWS, choice);
	printf("Sum of row %d is %d\n",choice,sumRow(matrix, ROWS, choice-1));
	printf("Which column you would like to sum: ");
	fflush(stdout);
	scanf("%d",&choice);
	printf("Sum of column %d is %d\n",choice,sumColumn(matrix,ROWS,choice-1));
	return 0;
}
void printUnitUpperTriangular(int matrix[][5], int rows)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < 5; j++) printf("\t%d\t", matrix[i][j]);
		printf("\n");
	}
}

void fillMatrix(int matrix[][5], int rows, int min, int max)
{
	srand(time(NULL));
	int i , j;
	for(i = 0; i< rows;i++)
		for (j = 0; j<5;j++)
		{
			matrix[i] [j] = MIN+ rand() % (MAX- MIN + 1);
		}
}

int sumRow(int matrix[][5], int rows, int c_row)
{
	int i = c_row ;
	int sum = 0;

	for (int j = 0; j < 5; j++)
		sum = sum + matrix[i][j];
	return sum;
}


int sumColumn(int matrix[][5], int rows, int c_col)
{
	int j = c_col;
	int sum = 0;

	for (int i = 0; i < rows ; i++)
		sum = sum + matrix[i][j];
	return sum;
}
