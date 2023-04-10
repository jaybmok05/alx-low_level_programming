#include <stdio.h>

/**
 * main - a function that prints the
 * number of arguments passed into it.
 * Return: returns 0
 * @argc: the number of arguments passed
 * @argv: an array of arguments
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
