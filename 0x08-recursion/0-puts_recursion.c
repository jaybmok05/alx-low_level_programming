#include "main.h"

/**
 * puts_recursion - a function that prints a string,
 * followed by a new line.
 * @str: the parameter.
 */

void _puts_recursion(char *str)
{
	int index = 0;

	if (str[index] != '\0')
	{
		_putchar(str[index]);
	}
	else if (str[index] == '\0')
	{
		return;
		_putchar('\n');
	}
	_puts_recursion(str + 1);
}
