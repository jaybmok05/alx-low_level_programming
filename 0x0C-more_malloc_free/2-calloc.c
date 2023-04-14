#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory of an array using malloc.
  * Return: returns pointer to memory allocated if successful.
  * if nmemb or size is 0, then _calloc returns NULL
  * if malloc fails, then _calloc returns NULL
  * @nmemb: number of elements in array.
  * @size: size of elements of array
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr_ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr_ptr = malloc(nmemb * size);
	if (arr_ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < (nmemb * size); index++)
	{
		*((char *)(arr_ptr) + index) = 0;
	}

	return (arr_ptr);
}
