#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * Return: length of the string
 * @str: the parameter as the string.
 */

int _strlen_recursion(char *str)
{
	int index = 0;
	int len_str = 0;

	if (str[index] != '\0')
	{
		len_str++;
		_strlen_recursion(str + 1);
	}
	else if (str[index] == '\0')
	{
		return (len_str);
	}
	return (len_str);
}
