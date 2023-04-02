#include "main.h"

/**
 * infinite_add -  a function that adds two numbers.
 * @n1: 1st paramter
 * @n2: second parameter
 * @r: 3rd parameter
 * @size_r: 4th parameter
 * Return: returns 0 If the result can not be stored in r
 * and returns a pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_1 = 0, len_2 = 0, sum = 0, index = size_r - 2;

	while (n1[len_1 + 1] != 0)
	{
		len_1++;
	}
	while (n2[len_2 + 1] != 0)
	{
		len_2++;
	}
	r[size_r - 1] = 0;

	while (index >= 0 && (len_1 >= 0 || len_2 >= 0))
	{
		sum += (len_1 < 0 ? '0' : n1[len_1]) +
				(len_2 < 0 ? '0' : n2[len_2]);
		sum -= 2 * '0';
		r[index] = sum % 10 + '0';
		sum /= 10;
		index--;
		len_1--;
		len_2--;
	}
	if ((index < len_1 || index < len_2) || (index < 0 && sum))
	{
		return (0);
	}
	if (sum != 0)
	{
		r[index] = sum + '0';
	}
	else
	{
		sum = 1;
	}
	index += sum ? 0 : 1;
	return (r + index);
}
