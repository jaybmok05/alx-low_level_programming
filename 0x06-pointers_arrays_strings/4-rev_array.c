#include "main.h"

/**
 * reverse_array - this function
 * reerves an array
 * @a: 1st parameter.
 * @n: second parameter.
 */

void reverse_array(int *a, int n)
{
	int index, tmp;

	for(index = 0; index <  n / 2; index++)
	{
		tmp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = tmp;
	}
}
