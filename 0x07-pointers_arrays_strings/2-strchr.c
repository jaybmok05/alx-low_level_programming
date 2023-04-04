#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * Return: a pointer to the first occurrence of the character c
 * @str: 1st parameter
 * @c: 2nd parameter
 */

char *_strchr(char *str, char c)
{
	int index;
	int n_ele = sizeof(*str) / sizeof(char);

	for (index = 0; index < n_ele - 1; index++)
	{
		if (str[index] == c && str[index] != '\0')
		{
			return (str + index);
		}
	}
	return (0);
}
