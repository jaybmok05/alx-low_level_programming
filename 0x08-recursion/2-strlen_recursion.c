#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * Return: length of the string
 * @str: the parameter as the string.
 */

int _strlen_recursion(char *str)
{
	int len_str = 0;

	if (*str == '\0')
	{
		return (len_str);
	}
	else
	{
		len_str++;
		return (len_str + _strlen_recursion(str + 1));
	}
}
