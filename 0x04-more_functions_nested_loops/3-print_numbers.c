#include "main.h"

/**
 * print_numbers - this prints numbers
 * from 0-9
 * Return: it doesnt return any value
 * @void: it doesnt  receives parameters
 */

void print_numbers(void)
{
	int val;

	for (val = 0; val <= 9 ; val++)
	{
		_putchar(val + '0');
	}
	_putchar('\n');
}
