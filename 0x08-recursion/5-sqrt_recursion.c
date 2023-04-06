#include "main.h"
int helper_recursion(int n, int curr, int prev);

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * Return:  returns the natural square root of a number.
 * @n: the number as the parameter
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper_recursion(n, 1, 0));
}

/**
 * helper_recursion - is a recursive function that takes three arguments
 * Return: if n is 0 or 1, the function returns n.
 * @n: the 1st parameter
 * @curr: 2nd parameter
 * @prev: 3rd parameter
 */

int helper_recursion(int n, int curr, int prev)
{
	int diff;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (curr == prev)
	{
		return (-1);
	}
	else
	{
		diff = curr - prev;
		if (diff == 1 && (n / curr) == curr)
		{
			return (curr);
		}
		else if ((n / curr) >= curr)
		{
			prev = curr;
			curr += diff;
		}
		else
		{
			curr -= diff;
		}
		return (helper_recursion(n, curr, prev));
	}
}
