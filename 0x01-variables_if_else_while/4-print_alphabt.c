#include <stdio.h>

/**
* main - prints the alphabet in lowercase letters, except for e and q
*
* Return: returns 0 for successful exe
*/
int main(void)
{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
		}
		putchar('\n');

	return (0);
}
