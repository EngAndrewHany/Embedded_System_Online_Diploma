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

int isSecondDiagonalOdd(int matrix[ROW][COL])
{ // by contradiction
	int j = COL - 1;
	for (int i = 0; i < ROW; i++)
	{
		if(matrix[i][j]%2 == 0)
			return 0;
		j--;
	}
//} extra
return 1;
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
	int res = isSecondDiagonalOdd(A);
	if(res) printf("Yes is odd\n");
	else printf("No is not odd\n");
	}
