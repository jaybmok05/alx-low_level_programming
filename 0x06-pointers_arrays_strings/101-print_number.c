#include "main.h"

/**
 * print_number - this function prints
 * an integer.
 * @n: this is the parameter.
 */

void print_number(int n)
{
	if (!(n >= 'a' && n <= 'z' && n >= 'A' && n <= 'Z'))
	{
		if (n < 0)
		{
			n = -n;
		}
		else
		{
			n = n;
		}
		_putchar(n + '0');
	}
}
