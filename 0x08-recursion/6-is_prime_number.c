#include "main.h"
int helper_prime_num(int n, int curr);

/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number, otherwise return 0.
 * Return: returns 1 if the input integer is a prime
 * number, otherwise return 0
 * @n: the parameter
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (helper_prime_num(n, 2));
}

/**
 * helper_prime_num - helper function
 * @n: the 1st parameter
 * @curr: 2nd pamater
 * Return: 1 if n is prime, 0 otherwise
 */

int helper_prime_num(int n, int curr)
{
	if (n < 2)
	{
		return (0);
	}
	else if (curr * curr > n)
	{
		return (1);
	}
	else if (n % curr == 0)
	{
		return (0);
	}
	return (helper_prime_num(n, curr + 1));
}
