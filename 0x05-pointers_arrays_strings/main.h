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
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * rev_string - a function that reverses a string.
 * puts2 -  function that prints every other character
 * of a string starting with the first character,
 * followed by a new line.
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * print_array - function that prints n elements of
 * an array of integers,followed by a new line.
 * _strcpy - a function that copies the string
 * pointed to by src,including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * _atoi - a function that convert a string to an integer.
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
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
#endif
