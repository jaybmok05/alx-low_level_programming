#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * Return: 1 if it worked, -1 if error
 * @n: decimal number passed by pointer
 * @index: index position to change, starting from 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int put_num = 1;

	put_num <<= index;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	(*n) = (*n) | put_num;
	return (1);
}
