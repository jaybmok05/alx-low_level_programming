#include "main.h"

/**
 * rot13 - a functon that encodes a string
 * using rot13
 * Return: returns the string
 * @str: the parameter
 */

char *rot13(char *str)
{
	int inner;
	int outer;
	char encode_1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encode_2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (outer = 0; str[outer] != '\0'; outer++)
	{
		for (inner = 0; encode_1[inner]; inner++)
		{
			if (str[outer] == encode_1[inner])
			{
				str[outer] = encode_2[inner];
				break;
			}
		}
	}
	return (str);
}
