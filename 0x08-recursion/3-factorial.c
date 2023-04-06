#include "main.h"

/**
 * factorial - a function that returns
 * the factorial of a given number.
 * @n: the parameter.
 * Return: the factorial of m
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
