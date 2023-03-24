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
	int not_char;/*not char*/

	not_char = !((c >= 'a' && c <= 'z') &&
		(c >= 'A' && c <= 'Z'));

	if (not_char || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
