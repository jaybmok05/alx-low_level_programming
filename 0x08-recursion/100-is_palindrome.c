#include "main.h"
int length(char *str);

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * Return: returns 1 if a string is a palindrome
 * and 0 if not
 * @str: the paramter
 */

int is_palindrome(char *str)
{
	int len = length(str);

	if (len <= 1)
	{
		return (1);
	}
	else if (*str == *(str + len - 1))
	{
		return (is_palindrome(str + 1) && is_palindrome(str + len - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * length - a function that returns the length of a string
 * @str: the parameter
 * Return: length of a string
 */

int length(char *str)
{
	if (*str != '\0')
	{
		return (1 + length(str + 1));
	}
	return (0);
}
