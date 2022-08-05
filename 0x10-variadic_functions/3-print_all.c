#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: list of all arguments passed to the function
 * Return: void
 */
void print_all(const char * const format,...)
{
	unsigned int d;
	va_list args;
	char *s, *separator;

	va_start(args, format);

	separator = "";

	d = 0;
	while (format && format[d])
	{
		switch (format[d])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args,  double));
				break;
			case 's':
				s = va_arg(args,  char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator,  s);
				break;
			default:
				d++;
				continue;
		}
		separator = ", ";
		d++;
	}

	printf("\n");
	va_end(args);
}
