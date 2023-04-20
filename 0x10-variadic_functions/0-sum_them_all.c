#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * Return: if num == 0 returns 0
 * @num: number of elements to sum
 */

int sum_them_all(const unsigned int num, ...)
{
	unsigned int index, sum = 0;
	va_list arg_ptr;

	va_start(arg_ptr, num);

	if (num == 0)
	{
		return (0);
	}

	for (index = 0; index < num; index++)
	{
		sum += va_arg(arg_ptr, int);
	}

	va_end(arg_ptr);
	return (sum);
}
