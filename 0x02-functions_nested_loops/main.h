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
 *
 * _abs(): this computes the absolute value of an integer.
 *
 * print_last_digit - this prints the last digit of a number.
 *
 * jack_bauer - a function that prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59.
 *
 * times_table - a function that prints the 9 times table,
 * starting with 0.
 *
 * add -  a function that adds two integers and returns the result.
 *
 * print_to_98: a function that prints all natural numbers
 * from n to 98, followed by a new line.
 *
 * print_times_table - a function that prints the n times table, starting with 0.
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
int _abs(int);/*function prototype for 6-abs.c*/
int print_last_digit(int);/*function prototype for 7-print_last_digit.c*/
void jack_bauer(void);/*function prototype for 8-24_hours.c*/
void times_table(void);/*function prototype for 9-times_table.c*/
int add(int, int);/*function prototype for 10-a+b.c*/
void print_to_98(int n);/*function prototype for 11-print_to_98.c*/
void print_times_table(int n);/*function prototype for 100-times_table.c*/
#endif
