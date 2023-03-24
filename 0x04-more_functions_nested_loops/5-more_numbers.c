#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14.
 * Return: return no value.
 * @void: receives no params
 */

void more_numbers(void)
{
	int val;
	int val_2;

	for (val = 0; val < 11; val++)
	{
		for (val_2 = 0; val_2 < 15; val_2++)
		{
			_putchar(val_2 + '0');
		}
		_putchar('\n');
	}
}
