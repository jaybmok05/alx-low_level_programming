#include "main.h"

/**
 * print_diagonal - this function prints
 * a diagonal line on ther terminal
 * @n: the parameter
 */

void print_diagonal(int n)
{
	int inner;
	int outer;

	for (outer = 0; outer < n; outer++)
	{	
		for (inner = 0; inner < n; inner++)
		{
			_putchar(' ');

		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
