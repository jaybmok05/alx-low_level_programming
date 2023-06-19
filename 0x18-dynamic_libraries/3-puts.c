#include "main.h"

/**
 * _puts - function that prints a string.
 * Return: does return anything
 * @str: a pointer parameter
 */

void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k] + 0);
	}
	_putchar('\n');
}
