#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * Return: returned pointer shall point to a newly allocated space in memory
 * which contains s1, followed by the first n bytes of s2, and null terminate
 * @str_1: 1st parameter str 1
 * @str_2: 2nd parameter str 2
 * @num_bytes: number of bytes from str 2
 */

char *string_nconcat(char *str_1, char *str_2, unsigned int num_bytes)
{
	char *concat_str;
	unsigned int index, len_1, len_2, len_str2;

	if (str_1 == NULL || str_2 == NULL)
	{
		str_1 = "";
		str_2 = "";
	}

	/*get the length of str_1, str_2, and n bytes str_2*/
	for (len_1 = 0; str_1[len_1] != '\0'; len_1++)
	{}
	for (len_str2 = 0; str_2[len_str2] != '\0'; len_str2++)
	{}
	for (len_2 = 0; str_2[len_2] != '\0' && len_2 < num_bytes; len_2++)
	{}

	concat_str = malloc(sizeof(concat_str) * (len_1 + len_2 + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	/*initializes concat_str with contents of str_1*/
	for (index = 0; index < len_1; index++)
	{
		concat_str[index] = str_1[index];
	}
	/*adds contents of n bytes str_2 to concat_str*/
	for (index = 0; index < len_2; index++)
	{
		concat_str[len_1 + index] =  str_2[index];
	}
	/*adds contents of entire str_2 to concat_str*/
	if (num_bytes >= len_str2)
	{
		for (index = 0; index < len_str2; index++)
		{
			concat_str[len_1 + index] =  str_2[index];
		}
		concat_str[len_1 + len_str2] = '\0';
		return (concat_str);
	}
	else
	{
		concat_str[len_1 + len_2] = '\0';
		return (concat_str);
	}
}
