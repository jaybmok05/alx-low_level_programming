#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * @void: receives no argument
 * Return: returns 0 when successful
 */

int main(void)
{
	long first = 1, next = 2, sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = first + next;
		printf(", %lu", sum);
		first = next;
		next = sum;
	}
	printf("\n");
	return (0);
}
