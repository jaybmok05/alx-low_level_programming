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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	sprintf(n_str, "%d", n);/*this converts n_str to int */
	
	if ((n_str[strlen(n_str) - 1] - '0') > 5)
	{
		printf("is %d and is greater than 5\n", atoi(n_str));
	}
	else if ((n_str[strlen(n_str) - 1] - '0') < 6 && (n_str[strlen(n_str) - 1] - '0') > 0)
	{
		printf("is %d and less than 6 and not 0\n", atoi(n_str));
	}
	else if ((n_str[strlen(n_str) - 1] - '0') == 0)
	{
		printf("is %d and 0\n", atoi(n_str));
	}
	return (0);
}
