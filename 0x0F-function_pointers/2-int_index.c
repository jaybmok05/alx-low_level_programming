#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: 1st parameter, array of integers.
 * @size: 2nd parameter number of elements in array.
 * @cmp: 3rd parameter, pointer to function used to compare values.
 * Return: -1 If no element matches and size <= -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int result, index;

	result = -1;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (result);
		}
		for (index = 0; index < size; index++)
		{
			cmp(array[index]);
			if (cmp(array[index]) > 0)
			{
				result = index;
				break;
			}
			if ((cmp(array[index]) == (-1)))
			{
				return (result);
			}
		}

	}
	return (result);
}
