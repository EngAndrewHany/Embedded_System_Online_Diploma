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

void printMatrix(int matrix[ROW][COL]);

void adds(int matrix1[ROW][COL], int matrix2[ROW][COL]){
	int new_matrix[ROW][COL];
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			new_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
//} extra
printMatrix(new_matrix);
}
// test
int main()
{
	int A[ROW][COL] =
	{
			{3, -1, 5, 19},
			{5, 18, 9, 2},
			{1, 7, 4, 5},
			{9, 5, 14, 2}
	};
	int B[ROW][COL] =
	{
			{7, 2, -6, -2},
			{12, 8, 4, 4},
			{2, 7, 13, 7},
			{1, -5, 19, 3}
	};
	printMatrix(A);
	printMatrix(B);
	adds(A,B);
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
