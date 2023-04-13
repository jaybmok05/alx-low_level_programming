#ifndef MAIN_FILE_H
#define MAIN_FILE_H

/**
 * _putchar - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * @c: The character to print
 */

/*list of function prototypes*/
int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int argc, char **argv);
char **strtow(char *str);
#endif
