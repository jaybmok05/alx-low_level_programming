#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function prints strings followed by a new line.
 * @separator: the string seperator.
 * @num: number of strings to print.
 */

void print_strings(const char *separator, const unsigned int num, ...)
{
	unsigned int index;
	char *str;
	va_list str_ptr;

	va_start(str_ptr, num);

	if (separator == NULL)
	{
		separator = "";
	}

	for (index = 0; index < num; index++)
	{
		str = va_arg(str_ptr, char *);

		if (str == NULL)
		{
			str = "(nil)";
		}
		printf("%s", str);
		if (index < num - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str_ptr);
}
