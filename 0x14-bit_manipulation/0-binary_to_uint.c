#include "main.h"

/**
 * binary_to_uint - a function convert a binary number to an unsigned int
 * Return: converted decimal number or 0 if there is an unconvertable char
 * @b: pointer to a string of 0 and 1 chars
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int total, power;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
		{
			total += power;
		}
	}

	return (total);
}

