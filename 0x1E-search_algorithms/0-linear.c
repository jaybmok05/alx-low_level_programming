#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1);

	do {
		printf("Value checked array[%u] = [%d]\n", index, array[index]);
		if (value == array[index])
			return (index);
		index++;
	} while (index < (int)size);
	return (-1);
}
