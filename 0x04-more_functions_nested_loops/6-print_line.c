#include "main.h"

/**
 * print_line -  a function that draws a straight line
 * in the terminal
 * Return: no value returned
 * @n: parameter.
 */

void print_line(int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
}
