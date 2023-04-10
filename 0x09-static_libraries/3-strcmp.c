#include "main.h"

/**
 * _strcmp - this compares to
 * strings.
 * Return: the result of the compared
 * strings
 * @s1: 1st parameter
 * @s2: 2nd parameter
 */

int _strcmp(char *s1, char *s2)
{
	int index;
	char con;

	for (index = 0, con = 1; con; index++)
	{
		con = (s1[index] == s2[index] &&
				s2[index] != '\0');
	}
	return (s1[index - 1] - s2[index - 1]);
}
