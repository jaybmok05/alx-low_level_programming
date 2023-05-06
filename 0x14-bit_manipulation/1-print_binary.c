#include "main.h"

/**
 * print_binary - a function that print binary representation of a number
 * @n: decimal number to print as binary
 */

void print_binary(unsigned long int n)
{
	int move;
	unsigned long int holder;

	if (n == 0)
	{
		_putchar(0 + '0');
		return;
	}

	for (holder = n, move = 0; (holder >>= 1) > 0; move++)
	{}

	for (; move >= 0; move--)
	{
		if ((n >> move) & 1)
		{
			_putchar(1 + '0');
		}
		else
		{
			_putchar(0 + '0');
		}
	}
}
