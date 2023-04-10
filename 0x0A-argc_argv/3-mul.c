#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that multiplies two numbers.
 * Return: returns 0 if successful and 1 error if argc
 * is less that two
 * @argc: the arguments count
 * @argv: the array of arrgments
 */

int main(int argc, char *argv[])
{
	int arg_1, arg_2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	arg_1 = atoi(argv[1]);
	arg_2 = atoi(argv[2]);

	mul = arg_1 * arg_2;
	printf("%d\n", mul);
	return (0);
}
