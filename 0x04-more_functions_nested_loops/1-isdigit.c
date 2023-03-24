#include "main.h"

/**
 * _isdigit - checks if input is
 * a number.
 * Return: returns 1 if successful, 0
 * if not.
 * @c: the parameter.
 */

int _isdigit(int c)
{
	int not_dgt;

	not_dgt = !((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'));

	if (not_dgt)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
