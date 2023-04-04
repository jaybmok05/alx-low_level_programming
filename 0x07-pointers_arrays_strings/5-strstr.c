#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * Return: a pointer to the beginning of the
 * located substring, or NULL if the substring
 * is not found.
 * @haystack: 1st parmeter
 * @needle: 2nd paremeter
 */

char *_strstr(char *haystack, char *needle)
{
	int index, index_1;

	for (index = 0; haystack[index] != '\0'; index++)
	{
		for (index_1 = 0; needle[index_1] != '\0'; index_1++)
		{
			if (haystack[index] == needle[index_1])
			{
				return (needle + index);
			}
		}
	}
	return (0);
}
