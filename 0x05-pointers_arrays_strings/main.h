#ifndef MAIN_FILE_H
#define MAIN_FILE_H

/**
 * _putchar - prints out a character
 * to the stdout.
 * reset_to_98 -  a function that takes a pointer to an int
 * as parameter and updates the value it points to to 98.
 * swap_int - a function that swaps the values of two integers.
 * _strlen - a function that returns the length of a string.
 * _puts - a function that prints a string, followed
 * by a new line, to stdout.
 * print_rev -  a function that prints a string, in reverse,
 * followed by a new line.
 * Return: returns the character.
 * @c: the parameter.
 */

/*list of function prototypes*/
int _putchar(char c);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
#endif
