#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money.
 * Return: return 0 when successful fi the number of
 * arguments passed to program is not exactly 1
 * return 1
 * @argc: counts of arguments
 * @argv: array of arguments
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (cents = atoi(argv[1]); cents > 0; cents--)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		else if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		else if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		else if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
	}
	printf("%d\n", coins);
	return (0);
}
