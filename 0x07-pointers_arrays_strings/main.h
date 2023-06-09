#ifndef MAIN_FILE_H
#define MAIN_FILE_H

/**
 * _putchar - prints a charcter to the stdout
 * Return: returns the character
 * @c: the character as the parameter
 */

/*list of function prototypes*/
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *str, char c);
unsigned int _strspn(char *str, char *accept);
char *_strpbrk(char *str, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*arr)[8]);
void print_diagsums(int *arr, int size);
void set_string(char **s, char *to);
#endif
