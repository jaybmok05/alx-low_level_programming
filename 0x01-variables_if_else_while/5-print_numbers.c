#include <stdio.h>

/**
* main - the starting point for
* a function that prints single digit numbers
* Return: returns 0 for successful exe
*/
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	printf("%i", digit);
	putchar('\n');

	return (0);
}
