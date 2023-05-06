#include "main.h"

/**
 * get_bit - a function that get the value of a bit at a given index
 * Return: Value of bit at index, or -1 if error
 * @num: number to evaluate
 * @index: index starting from 0, of the bit to get
 */

int get_bit(unsigned long int num, unsigned int index)
{
	unsigned long int holder;

	if (index > 64)
	{
		return (-1);
	}

	holder = num >> index;

	return (holder & 1);
}
