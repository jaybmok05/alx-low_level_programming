#include "main.h"

/**
 * flip_bits - a function that flip bits
 * to convert one number to another number
 * Return: returns number of bits needed to flip
 * @n: first number
 * @m: second number to convert to
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter;
	unsigned long int diff;

	diff = n ^ m;

	for (counter = 0; diff; counter++)
	{
		diff &= (diff - 1);
	}

	return (counter);
}
