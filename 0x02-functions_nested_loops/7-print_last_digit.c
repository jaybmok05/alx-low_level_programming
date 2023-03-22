#include "main.h"

/**
 * print_last_digit - this function prints
 * the last digit of a number.
 *
 * @n: this is the parameter
 * Return: returns the value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;/*gets the last digit of n*/
	_putchar(last_digit);
	return (last_digit);
}
