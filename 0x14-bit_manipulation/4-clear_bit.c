#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * Return: 1 if it worked, -1 if error
 * @n: pointer to decimal number to change
 * @index: index position to change
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int put_num = 1;

	put_num <<= index;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	(*n) = (*n) & ~(put_num);
	return (1);
}
