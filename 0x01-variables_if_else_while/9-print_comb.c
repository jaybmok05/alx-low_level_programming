#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is a strating point for a function that
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: returns 0 for successful exe
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
