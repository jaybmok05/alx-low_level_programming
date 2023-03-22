#include <stdio.h>

/**
 * main - write a program that finds and prints the sum of
 * the even-valued terms, followed by a new line.
 *
 * Return: returns 0 when successful
 */

int main(void)
{
	long int x = 1, y = 2, sum = 0, res = 2;

	while (sum < 4000000)
	{
		sum = x + y;
		x = y;
		y = sum;
		if (sum % 2 == 0)
		{
			res += sum;
		}
	}
	printf("%li\n", res);
	return (0);
}
