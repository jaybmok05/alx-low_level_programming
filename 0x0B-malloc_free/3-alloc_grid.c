#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * Return: return NULL on failure
 * If width or height is 0 or negative, return NULL
 * @width: the row of 2d array
 * @height: the column of array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int size = width * height, index_0, index_1;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height + sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (index_0 = 0; index_0 < height; index_0++)
	{
		arr[index_0] = (int *)(arr + height) + width * index_0;
		for (index_1 = 0; index_1 < width; index_1++)
		{
			arr[index_0][index_1] = 0;
		}
	}

	return (arr);
}
