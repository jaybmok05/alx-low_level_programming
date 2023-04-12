#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * Return: returns pointer to newly allocated space
 * that contains contents of str_1 and str_2.
 * @str_1: 1st parameter
 * @str_2: 2nd parameter
 */

char *str_concat(char *str_1, char *str_2)
{
	char *concat = str_1, *concat_str;
	unsigned int size = 0, index;

	if (str_1 == NULL || str_1 == NULL)
	{
		str_1 = "";
		str_2 = "";
	}

	for (index = 0; str_2[index] != '\0'; index++)
	{
		concat += str_2[index];
	}
	concat[index] = '\0';
	for (index = 0; concat[index] != '\0'; index++)
	{
		size++;
	}

	concat_str = (char *)malloc(sizeof(char) * size + 1);

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		concat_str[index] = concat[index];
	}
	
	concat_str[index] = '\0';
	return (concat_str);
}
