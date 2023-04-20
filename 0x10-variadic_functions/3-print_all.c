#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything.
 * @format: all arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	unsigned int index;
	char *str, *separator;
	va_list arg_ptr;

	va_start(arg_ptr, format);

	separator = "";

	index = 0;
	while (format && format[index])
	{
		switch (format[index])
		{
		case 'c':
			printf("%s%c", separator,  va_arg(arg_ptr, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(arg_ptr, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(arg_ptr, double));
			break;
		case 's':
			str = va_arg(arg_ptr, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s%s", separator, str);
			break;
		default:
			index++;
			continue;
		}
		separator = ", ";
		index++;
	}
	printf("\n");
	va_end(arg_ptr);
}
