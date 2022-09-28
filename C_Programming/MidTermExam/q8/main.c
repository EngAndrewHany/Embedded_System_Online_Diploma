/*
 * main.c
 *
 *  Created on: Aug 28, 2022
 *      Author: Andrew Hany
 */


#include <stdio.h>
void reverse(int arr[10], int n)
{
	int i, tmp;
	for(i=0;i< n/2;i++)
	{
		tmp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = tmp;
	}
}
int main()
{
	int arr[100], i, size;
	printf("Enter size of array: ");
	fflush (stdout);
	scanf("%d",&size);
	printf("Enter the elements of the array: ");
	fflush (stdout);
	for (i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}
	reverse(arr,size);
	printf("After reversing the array: ");
	for(i=0;i < size;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
