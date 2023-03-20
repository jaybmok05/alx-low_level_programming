#include <stdio.h>

/**
 *main - prints without using printf/puts
 *Return: it will return 1
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, "%s", s);
	return (1);
}
