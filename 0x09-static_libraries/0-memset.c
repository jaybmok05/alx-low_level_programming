#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * Return: a pointer to the memory area s.
 * @str: 1st parameter
 * @b: 2nd parameter
 * @n: 3rd parameter
 */

char *_memset(char *str, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		switch (*str)
		{
		default:
			str[index] = b;
		}

	}
	return (str);
}
