#include "main.h"

/**
 * _strncat - concatenates two strings
 * Return: returns a pointer to the
 * resulting string dest.
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: 3rd parameter
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int k;

	while (*ptr != '\0')
	{
		ptr++;
	}
	for (k = 0; k < n && *src != '\0'; k++)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
