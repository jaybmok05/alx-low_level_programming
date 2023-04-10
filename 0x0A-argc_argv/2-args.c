#include <stdio.h>

/**
 * main - a function that prints all arguments it receives.
 * Return: returns 0 when sucessful
 * @argc: count of arguments
 * @argv: array of argumnts
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
