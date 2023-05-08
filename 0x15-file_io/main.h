#ifndef MAIN_FILE_H
#define MAIN_FILE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * Return: returns the actual number of letters it could read and print
 * @filename: a pointer to the file to be read
 * @letters: the number of letters it should read and print
 */

/*list of prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
