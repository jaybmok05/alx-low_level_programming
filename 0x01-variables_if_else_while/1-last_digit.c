#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - this is the starting point of the program
 * Return: returns 0 to indicate successful .exe
 */

int main(void)
{
	int n;
	char n_str[16];
	char last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	sprintf(n_str, "%d", n);/*this converts n_str to int */
	last_digit = n_str[strlen(n_str) - 1] - '0';
	if (last_digit > 5)
	{
		printf("Last of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit > 0)
	{
		printf("Last of %d is %d and less than 6 and not 0\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last of %d is %d and 0\n", n, last_digit);
	}
	return (0);
}
