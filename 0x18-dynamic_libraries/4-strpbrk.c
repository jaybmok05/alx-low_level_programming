#include "main.h"

/**
 * _strpbrk - a function that searches a string
 * for any of a set of bytes.
 * Return: a pointer to the byte in s that
 * matches one of the bytes in accept, or
 * NULL if no such byte is found
 * @str: 1ste parameter
 * @accept: 2nd paraemter
 */

char *_strpbrk(char *str, char *accept)
{
	int index, index_1;
	int n_ele = sizeof(*str) / sizeof(char);
	int n_ele1 = sizeof(*accept) / sizeof(char);

	for (index = 0; index < n_ele - 1; index++)
	{
		for (index_1 = 0; index_1 < n_ele1; index_1++)
		{
			if (str[index] == accept[index_1])
			{
				return (str + index);
			}
		}
	}
	return (0);
}
