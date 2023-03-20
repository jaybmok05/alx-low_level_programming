#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - this is the starting point for function
 * Return: returns 0
 */

int main(void)
{
	int n;
	char n_str[20];
	char last_dg;
	int n_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	sprintf(n_str, "%d", n);
	last_dg = n_str[strlen(n_str) - 1];
	n_num = last_dg - '0';

	if (n_num < 6 && n_num != 0)
	{
		if (n_num < 0)
		{
			n_num = -n_num;
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_num);
		}
		else
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_num);
		}
	}
	else
	{
		if (n_num > 5)
		{
			printf("Last digit of %d is %d and is greater than 5", n, n_num);
		}
		else if (n_num == 0)
		{
			printf("Last digit of %d is %d and is 0", n, n_num);
		}
	}
	return (0);
}
