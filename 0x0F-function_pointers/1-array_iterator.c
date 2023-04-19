#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes function given as param.
 * @array: 1st parameter array of elements.
 * @size: 2nd size of array.
 * @action: 3rd parameter, a function pointer.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array && size > 0 && action)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
