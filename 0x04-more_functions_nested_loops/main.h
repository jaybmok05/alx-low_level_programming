#ifndef MAIN_FILE_H
#define MAIN_FILE_H

/**
 * _putchar - prints out a character
 * _isupper - checks for uppercase lettr
 * _isdigit - checks if input is number
 * mul - multiples two numbers
 * print_numbers - prints nums from 0-9
 * print_most_numbers - prints the numbers,
 * from 0 to 9, followed by a new line. But,
 * doesnt print 2 and 4.
 * Return: returns the character
 * @c: parametter to the functions
 */

/*functions prototypes*/
int _putchar(char c);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
#endif
