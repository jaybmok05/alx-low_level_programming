#ifndef VARIADIC_FILE_H
#define VARIADIC_FILE_H
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of
 * all its parameters.
 * @num: numbers of elements to add
 * Return: returns the sum of all its parameters.
 * If n == 0, returns 0
 */

/*list of function prototypes*/
int sum_them_all(const unsigned int num, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
