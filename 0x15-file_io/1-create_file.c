#include "main.h"

/**
  * create_file - a function that creates a file.
  * @filename: a pointer to filename.
  * @text_content: the string to be written to file.
  * Return:  returns 1 on success -1 on failure.
  */

int create_file(const char *filename, char *text_content)
{
	int file, index, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (index = 0; text_content[index]; index++)
		{}
		wr = write(file, text_content, index);
		if (wr != index)
		{
			return (-1);
		}
	}

	close(file);
	return (1);
}
