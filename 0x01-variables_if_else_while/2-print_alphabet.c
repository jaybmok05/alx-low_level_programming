#include <stdio.h>
#include <stdlib.h>
/**
 * main - the starting point of the program that compares alphabets
 * Return: returns 0 for successful exe
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
