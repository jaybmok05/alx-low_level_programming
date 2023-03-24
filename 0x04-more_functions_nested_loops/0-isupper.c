#include "main.h"

/**
 * _isupper - check if a character is uppercase.
 * Return: return 1 if successful or 0
 * when not.
 * @c: the parameter for the function
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
