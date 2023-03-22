#include "main.h"

/**
 * print_alphabet - this is a function
 * that generates alphabets using a for.
 * loop and prints them out.
 * Return: returns 0 if successful.
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
