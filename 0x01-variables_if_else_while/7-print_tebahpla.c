#include <stdio.h>

/**
 * main - this is a strating point for a function
 * print the alphabet in lowercase letters in reverse
 *
 * Return: returns 0 for successful exe
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	putchar(letter);

	putchar('\n');

	return (0);
}
