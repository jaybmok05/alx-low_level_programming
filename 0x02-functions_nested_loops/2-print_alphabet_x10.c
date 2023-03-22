#include "main.h"

/**
 * print_alphabet_x10 - this functions
 * prints out alphabets a-z ten times
 */

void print_alphabet_x10(void)
{
	char j;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
