#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function prints numbers followed by a new line.
 * @separator: string to be printed between numbers.
 * @num: number of integers to print.
 */

void print_numbers(const char *separator, const unsigned int num, ...)
{
	unsigned int index;
	va_list numbers;

	va_start(numbers, num);

	for (index = 0; index < num; index++)
	{
		printf("%d", va_arg(numbers, int));
		if (index < num - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
