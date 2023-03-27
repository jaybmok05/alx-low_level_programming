#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * Return: return the length of the string.
 * @s: the parameter.
 */

int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length = i + 1;
		if ((s = ""))
		{
			length = 0;
		}
	}
	return (length);
}
