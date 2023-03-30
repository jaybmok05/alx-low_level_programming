#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: parameter
 * Return: returns string pointer
 */

char *leet(char *s)
{
	char arr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (s[i] == arr[j])
			{
				s[i] = arr[j + 1];
				break;
			}
		}
	}
	return (s);
}
