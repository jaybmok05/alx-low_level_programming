#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * Return: returns pointer to newly allocated space.
 * @str_1: 1st parameter
 * @str_2: 2nd parameter
 */

char *str_concat(char *str_1, char *str_2)
{
	char *concat_str;
	unsigned int size_1, size_2, index;

	if (str_1 == NULL)
	{
		str_1 = "";
		str_2 = "";
	}

	for (size_1 = 0; str_1[size_1] != '\0'; size_1++)
		;

	for (size_2 = 0; str_2[size_2] != '\0'; size_2++)
		;

	concat_str = (char *)malloc(sizeof(char) * (size_1 + size_2 + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size_1; index++)
	{
		concat_str[index] = str_1[index];
	}
	for (index = 0; index < size_2; index++)
	{
		concat_str[size_1 + index] = str_2[index];
	}
	concat_str[size_1 + size_2] = '\0';

	return (concat_str);
}
