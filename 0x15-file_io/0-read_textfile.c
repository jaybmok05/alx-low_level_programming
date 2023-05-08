#include "main.h"

/**
  * read_textfile - a function that reads a text file and
  * prints to the POSIX stdout.
  * @filename: a pointer to name of file.
  * @letters: the number of letters it should read and print.
  *
  * Return: number of letters it could print or write or 0.
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	/*pointer to the buffer where the data should be stored*/
	char *buffr;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	/*if it fails to open*/
	if (file == -1)
	{
		return (0);
	}
	buffr = malloc(sizeof(char) * letters + 1);
	if (buffr == NULL)
	{
		return (0);
	}
	rd = read(file, buffr, letters);
	if (rd == -1)
	{
		return (0);
	}

	buffr[letters] = '\0';

	wr = write(STDOUT_FILENO, buffr, rd);
	if (wr == -1)
	{
		return (0);
	}


	close(file);
	free(buffr);
	return (wr);
}
