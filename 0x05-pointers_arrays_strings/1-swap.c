#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: 1st parameter.
 * @b: 2nd parameter.
 */

void swap_int(int *a, int *b)
{
	int vessel;

	vessel = *a;
	*a = *b;
	*b = vessel;
}
