#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all
 * the arguments of your program.
 * Return: returns NULL if ac == 0 or av == NULL,
 * returns a pointer to a new string, or NULL if it fails
 * @argc: count of arguments
 * @argv: array of arguments
 */

char *argstostr(int argc, char **argv)
{
	int index_0, index_1, size = 0;
	char *av_ptr;

	if (argc == 0 || argv == NULL)
	{
		return (NULL);
	}

	for (index_0 = 0; index_0 < argc; index_0++)
	{
		for (index_1 = 0; argv[index_0][index_1]; index_1++)
		{
			size++;
		}
		size++;
	}
	av_ptr = malloc(sizeof(char) * size + 1);

	if (av_ptr == NULL)
	{
		return (NULL);
	}
	size = 0;

	for (index_0 = 0; index_0 < argc; index_0++)
	{
		for (index_1 = 0; argv[index_0][index_1]; index_1++)
		{
			av_ptr[size++] = argv[index_0][index_1];
		}
		av_ptr[size++] = '\n';
	}
	av_ptr[size] = '\0';
	return (av_ptr);
}
