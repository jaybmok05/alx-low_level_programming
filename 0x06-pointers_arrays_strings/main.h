#ifndef MAIN_FILE_H
#define MAIN_FILE_H

/**
 * _putchar - this prints out a character to
 * the stdout
 * Return: return 0 on success
 * On error, -1 is returned, and
 * errno is set appropriately.
 * reverse_array - reverses an array.
 * @c: the parameter which is the
 * character.
 */

/*list of functions prototype*/
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
void reverse_array(int *a, int n);
#endif
