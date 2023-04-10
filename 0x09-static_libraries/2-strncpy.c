#include "main.h"

/**
 * _strncpy - this function copies
 * a string.
 * Return: returns a copied string
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: 3rd parameter
 */

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	for (; k < n; k++)
	{
		dest[k] = '\0';
	}
	return (dest);
}
