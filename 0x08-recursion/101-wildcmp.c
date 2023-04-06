#include "main.h"

/**
 * wildcmp - function that compares two strings and returns 1 if
 * the strings can be considered identical, otherwise return 0.
 * Return: 1 if the strings can be considered identical, otherwise return 0
 * @str_1: 1st parameter
 * @str_2: 2nd parameter
 */

int wildcmp(char *str_1, char *str_2)
{
	if (*str_1 == '\0' && *str_2 == '\0')
	{
		return (1);
	}
	else if (*str_1 == *str_2)
	{
		return (wildcmp(str_1 + 1, str_2 + 1));
	}
	else if (*str_2 == '*')
	{
		if (*(str_2 + 1) == '\0')
		{
			return (1);
		}
		else if (*str_1 == '\0')
		{
			return (wildcmp(str_1, str_2 + 1));
		}
		else
		{
		return (wildcmp(str_1 + 1, str_2) || wildcmp(str_1, str_2 + 1));
		}
	}
	return (0);
}
