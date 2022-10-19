/*
 * main.c
 *
 *  Created on: Oct 18, 2022
 *      Author: Andrew Hany
 */


#include<stdio.h>
#include<limits.h> // missing from code in slides

//const int ROW = 4, COL = 4; size cannot be define like that in c we use define instead
#define ROW 4
#define COL 4

void findMax(int r, int c, int matrix[r][c])
{
	for (int j = 0; j < c; j++)
	{
		int max = INT_MIN;
		for (int i = 0; i < r; i++)
		{
			if(matrix[i][j]>max)
				max = matrix[i][j];
		}
		printf("Max = %d\n", max);
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
	findMax(ROW, COL, A);
}
