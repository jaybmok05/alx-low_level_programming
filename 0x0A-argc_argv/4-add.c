#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that adds positive numbers.
 * Return: returns 0 when sucessful
 * @argc: argument count
 * @argv: array of arguments
 */

int main(int argc, char *argv[])
{
	int index, index_2;
	int result = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (index = 1; index < argc; index++)
	{
		for (index_2 = 0; argv[index][index_2]; index_2++)
		{
			if (argv[index][index_2] < '0' || argv[index][index_2] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[index]);
	}
	printf("%d\n", result);
	return (0);
}
