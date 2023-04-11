#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * Return: Returns NULL if size = 0
 * returns pointer to the array, or NULL if it fails
 * @size: 1st parameter
 * @c: the 2nd character
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *arr;

	arr = (char *)malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		arr[index] = c;
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
