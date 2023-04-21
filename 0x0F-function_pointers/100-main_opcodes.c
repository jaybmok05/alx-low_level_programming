#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function prints the opcodes of its own main function.
 * Return: returns 0
 * @argc: number of arguments
 * @argv: arguments array
 */

int main(int argc, char **argv)
{
	int index, byte;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (index = 0; index < (byte - 1); index++)
	{
		if (byte != 0)
		{
			printf("%02hhx ", ((char *)main)[index]);
		}
	}
	printf("%02hhx\n", ((char *)main)[index]);
	return (0);
}
