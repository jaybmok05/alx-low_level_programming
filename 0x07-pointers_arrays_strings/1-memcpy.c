#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * Return: returns pointer dest
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: 3rd parameter
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		switch (*src)
		{
		default:
			dest[index] = src[index];
		}
	}
	return (dest);
}
