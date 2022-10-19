#include<stdio.h> // problem 6
#define SIZE 20

void bubbleSort( int array[], int size)
{
int i, j;
// sorting for ascending order
for (i = 0; i < size-1; i++) {
for (j = i; j < size; j++) {
if (array[i] > array[j]) {
// swap
int temp = array[j];
array[j] = array[i];
array[i] = temp;
}
}
}
}

void findMedian(const int array[], int size){
if(size%2==0)
{
double res = array[size / 2] + array[(size / 2) - 1];
res = res / 2;
printf("\nMedian = %0.3lf\n", res);
}
else {
printf("\nMedian = %d\n",(array[size/2]));
}
}
int main()
{
	int myArray[20] = {4, 124, 9, 5, 6, 9, 1, 7, 1, 6, 4, 31, 6, 9, 5, 10, 65, 9, 42, 5};

	printf("\nbefore sort:\t");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", myArray[i]);
	}
	bubbleSort(myArray, SIZE);
	printf("\nbefore sort:\t");
		for (int i = 0; i < SIZE; i++)
		{
			printf("%d ", myArray[i]);
		}
	findMedian(myArray, SIZE);
}
