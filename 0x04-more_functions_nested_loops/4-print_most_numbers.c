#include "main.h"

/**
 * print_most_numbers - prints 0-9 but not
 * 2 and 4.
 * Return: doesnt return any value
 * @void: receives no parameters
 */

void print_most_numbers(void)
{
	int val;

	val = 0;

	while (val <= 9)
	{
		if (val != 2 && val != 4)
		{
			_putchar(val + '0');
		}
		val++;
	}
	_putchar('\n');
}
