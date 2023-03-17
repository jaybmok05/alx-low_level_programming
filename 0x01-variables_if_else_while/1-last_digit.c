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
	char last_dg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	sprintf(n_str, "%d", n);/*this converts n_str to int */
	last_dg = n_str[strlen(n_str) - 1] - '0';
	if (last_dg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_dg);
	}
	else if (last_dg == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_dg);
	}
	else
	{
		if (n_str[0] == '-')
		{
			last_dg = -(n_str[strlen(n_str) - 1] - '0');
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_dg);
		}
	}
	return (0);
}
