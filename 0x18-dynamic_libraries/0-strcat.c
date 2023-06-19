#include "main.h"

/**
 * _strcat - this function concatenates
 * two strings
 * Return: returns a pointer to
 * the resulting string dest.
 * @dest: 1st parameter
 * @src: 2nd parameter
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
