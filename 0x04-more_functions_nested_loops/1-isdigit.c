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
	int n_c;/*not char*/

	n_c = !((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'));

	if (n_c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
