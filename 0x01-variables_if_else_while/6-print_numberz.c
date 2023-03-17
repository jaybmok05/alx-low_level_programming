#include <stdio.h>

/**
 * main - this is starting point for a function that
 * print all single digit numbers using only putchar
 * Return: returns 0 for Successful exe
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	putchar(digit + '0');

	putchar('\n');

	return (0);
}
