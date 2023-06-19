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
	int index, index_1, in_hay;

	/*loop over haystack*/
	for (index = 0; haystack[index] != '\0'; index++)
	{
		in_hay = 1;
		/*loop over needle*/
		for (index_1 = 0; needle[index_1] != '\0'; index_1++)
		{
			if (haystack[index + index_1] != needle[index_1])
			{
				in_hay = 0;
				break;
			}
		}
		switch (in_hay)
		{
		case 1:
			return (haystack + index);
		}
	}
	return (0);
}
