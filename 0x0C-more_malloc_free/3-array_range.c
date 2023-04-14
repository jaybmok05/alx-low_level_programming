#include "main.h"
#include <stdlib.h>

/**
  * array_range - a function that creates an array of integers
  * Return: pointer to newly created array.
  * If min > max, returns NULL
  * If malloc fails, returns NULL
  * @min: 1st parameter minimum value.
  * @max: 2nd parameter maximum value.
  */

int *array_range(int min, int max)
{
	int index, arr_range;
	int *arr_ptr;

	arr_range = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr_range = ((max + 1) - min);

	arr_ptr = malloc(sizeof(int) * arr_range);

	if (arr_ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < arr_range; index++)
	{
		*(arr_ptr + index) = min + index;
	}

	return (arr_ptr);
}
