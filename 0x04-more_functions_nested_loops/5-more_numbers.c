#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14.
 * Return: return no value.
 * @void: receives no params
 */

void more_numbers(void)
{
	int inner;
	int outer;

	for (outer = 0; outer < 10; outer++)
	{
		for (inner = 0; inner <= 14; inner++)
		{
			if (inner > 9)
			{
				_putchar(inner / 10 + '0');
			}
			_putchar(inner % 10 + '0');
		}
		_putchar('\n');
	}
}
