#include "main.h"

/**
 * print_sign - this checks for number signs
 * @n: this is the parameter
 * Return: returns 1 when positive, 0 when zero,
 * and -1 when negative
 */

int print_sign(int n)
{
	if (n > 0)/*positive*/
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)/*negative*/
	{
		_putchar('-');
		return (-1);
	}
	else/*is zero*/
	{
		_putchar('0');
		return (0);
	}
}
