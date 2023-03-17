#include <stdio.h>

/**
 * main - this is a strating point for a function that
 * print the numbers of base 16 in lowercase
 *
 * Return: returns 0 for successful exe
 */
int main(void)
{
		char digit;

		for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

		for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

		putchar('\n');

	return (0);
}
