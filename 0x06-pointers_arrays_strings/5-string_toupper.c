#include "main.h"

/**
 * string_toupper - a function that changes all
 * lowercase letters of a string to uppercase.
 * Return: returns to uppercased string
 * @str: 1str parameter as pointer
 */

char *string_toupper(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 'a' && s[k] <= 'z')
		{
			s[k] = s[k] - ('a' - 'A');
		}
	}
	return (s);
}
