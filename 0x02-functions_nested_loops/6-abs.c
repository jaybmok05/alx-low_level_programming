#include "main.h"

/**
 * _abs - this function computes the absolute value of an integer.
 * @n: the parameter for the function _abs().
 * Return: returns absolute value when successful
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
