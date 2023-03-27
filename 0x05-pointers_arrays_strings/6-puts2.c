#include "main.h"

/**
 * puts2 -  a function that prints every other character
 * of a string starting with the first character,
 * followed by a new line.
 * Return: returns no value
 * @str: parameter.
 */

void puts2(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
