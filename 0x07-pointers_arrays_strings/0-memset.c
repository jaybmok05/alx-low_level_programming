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
	unsigned int index_1, index_2;
	unsigned int n_ele = sizeof(*str)/sizeof(char);

	if (*str != '\0')
	{
		for (index_1 = 0; index_1 < n_ele - 1; index_1++)
		{
			for (index_2 = 0; index_2 < n; index_2++)
			{
				str[index_2] = b;
			}
		}
	}
	return (str);
}
