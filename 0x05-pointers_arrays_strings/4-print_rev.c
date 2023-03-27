#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * Return: it does return any value
 * @s: this is the parameter
 */

void print_rev(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{}

	for (j = j - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
