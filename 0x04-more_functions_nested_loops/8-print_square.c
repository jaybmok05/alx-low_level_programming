#include "main.h"

/**
 * print_square - this function
 * prints square on the terminal
 * @size: the parameter
 */

void print_square(int size)
{
	int inner;
	int outer;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (outer = 0; outer < size; outer++)
		{
			for (inner = 0; inner < size; inner++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
