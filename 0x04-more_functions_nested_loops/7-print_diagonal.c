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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (outer = 0; outer < n; outer++)
		{
			for (inner = 0; inner < outer; inner++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
