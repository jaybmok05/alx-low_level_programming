#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: parameter to function
 */

void print_to_98(int n)
{
	int k;

	for (k = n; k <= 98; k++)
	{
		printf("%d, \n", k);
	}
}
