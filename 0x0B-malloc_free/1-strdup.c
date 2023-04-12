#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available
 * @str: parameter
 */

char *_strdup(char *str)
{
	unsigned int size = 0, index;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; str[index] != '\0'; index++)
	{
		size += index;
	}

	new_str = (char *)malloc(sizeof(char) * size);

	if (new_str == NULL)
	{
		return (NULL);
	}

	new_str = str;
	return (new_str);
	free(new_str);
}
