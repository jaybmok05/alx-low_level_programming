#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * Return: returns no value.
 * @s: the parameter.
 */

void rev_string(char *s)
{
	int p;
	int q;
	char tmp;

	for (p = 0; s[p] != '\0'; p++)
	{}
	p--;
	for (q = 0; p > q; q++)
	{
		tmp = s[q];
		s[q] = s[p];
		s[p] = tmp;
		p--;
	}
}

