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
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14.
 * print_line - draws a straight line in the terminal.
 * print_diaggonal - draws diagonal line in ther terminal
 * print_sqaure - draws square on the terminal
 * print_triangle - draws triangle on the terminal
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
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
#endif
