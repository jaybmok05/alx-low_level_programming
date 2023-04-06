#include "main.h"
int last_index(char *str);

/**
 * _print_rev_recursion - a function that prints
 * a string in reverse.
 * @str: the parameter
 */

void _print_rev_recursion(char *str)
{
	int index;

	index = (sizeof(*str) / sizeof(char)) - 1;

	if (str[index] != '\0')
	{
		_putchar(str[index]);
	}
	else if (str[index] == '\0')
	{
		_putchar(str[index]);
		return;
	}
	_print_rev_recursion(str - 1);
}
