/*
 * main.c
 *
 *  Created on: Oct 18, 2022
 *      Author: Andrew Hany
 */


#include<stdio.h>

//const int ROW = 4, COL = 4; size cannot be define like that in c we use define instead
#define ROW 4
#define COL 4

void swapRow(int matrix[ROW][COL], int F_COL, int S_COL)
{
	for (int i = 0; i < ROW; i++)
	{
		int t = matrix[i][F_COL];
		matrix[i][F_COL] = matrix[i][S_COL];
		matrix[i][S_COL] = t;
	}
}

void printMatrix(int matrix[ROW][COL]) // all function is missing in slides
{
printf("\n");
for (int i = 0; i < ROW; i++) {
for (int j = 0; j < COL; j++)
printf("%d ", matrix[i][j]);
printf("\n");
}
}
// test
int main(){
	int A[ROW][COL] =
	{
			{3, -1, 5, 19},
			{5, 18, 9, 2},
			{1, 7, 4, 5},
			{9, 5, 14, 2}
	};
	printMatrix(A);
	printf("\n");
	swapRow(A, 0, 3);
	printMatrix(A);
}
