#include "main.h"

/**
* _strcpy - function that copies the string pointed to by src
* @dest: 1st parameter
* @src: 2nd parameter
* Return: returns the value of the pointer
*/

char *_strcpy(char *dest, char *src)
{
	int k = 0;
	int i;

	while (src[k] != '\0')
	{
		k++;
	}
	for (i = 0; i <= k; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
