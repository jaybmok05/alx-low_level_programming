#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * Return: a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * @byte: parameter size of bytes to allocate
 */

void *malloc_checked(unsigned int byte)
{
	void *alloc_mem;

	alloc_mem = (void *)malloc(sizeof(alloc_mem) * byte);

	if (alloc_mem == NULL || byte <= 0)
	{
		exit(98);
	}
	return (alloc_mem);
}
