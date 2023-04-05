#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @arr: 1st parameter
 * @size: 2nd parameter
 */

void print_diagsums(int *arr, int size)
{
	/*incr is increment*/
	int index, dia_1 = 0, dia_2 = 0;
	int incr_1 = size + 1;
	int incr_2 = size - 1;
	int limit_1 = size * size;
	int limit_2 = (size * size) - (size - 1);

	for (index = 0; index < limit_1; index += incr_1)
	{
		dia_1 += arr[index];
	}

	for (index = size - 1; index < limit_2; index += incr_2)
	{
		dia_2 += arr[index];
	}
	printf("%d, %d\n", dia_1, dia_2);
}
