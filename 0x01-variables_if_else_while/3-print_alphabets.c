#include <stdio.h>
/**
 * main - main starting point of the program
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: return 0 for successful exe
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
