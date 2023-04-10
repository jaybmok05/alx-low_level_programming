#include "main.h"

/**
 * _strspn - a function that gets the length
 * of a prefix substring.
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes
 * from accept
 * @str: 1st parameter
 * @accept: 2nd parameter
 */

unsigned int _strspn(char *str, char *accept)
{
	int index;
	unsigned int sum = 0;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] == accept[index])
		{
			sum++;
		}
	}
	return (sum);
}
