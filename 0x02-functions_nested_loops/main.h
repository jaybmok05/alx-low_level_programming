#ifndef MAIN_FILE_H
#define MAIN_FILE_H

/**
 * _putchar(): this function writes char
 * to the stdout
 *
 * print_alphabet(): this function prints alphabets from a to z
 *
 * print_alphabet_x10(): this function prints print_alphabet ten times
 *
 * _islower(): this check for lowercase letters
 *
 * _isalpha(): this checks for alphabet
 *
 * print_sign(): this function checks for number signs
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * @char: it is the data type for parameter.
 */

int _putchar(char);/*function prototype for putchar.c*/
void print_alphabet(void);/*function prototype for 1-alphabet.c*/
void print_alphabet_x10(void);/*function prototype for 2-print_alphabet_x10.c*/
int _islower(int c);/*function prototype for 3-islower.c*/
int _isalpha(int c);/*function prototype for 4-isalpha.c*/
int print_sign(int n);/*function prototype for 5-sign.c*/
#endif
