#include "main.h"

/**
 * _isalpha - this function checks for alphabets.
 * Return: it will return 1 if
 * successful and 0 if not.
 */

int _isalpha(int c)
{
	int letter;

	letter = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');

	if (letter)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
