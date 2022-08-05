#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int d;

	va_start(numbers, n);

	for (d = 0; d < n; d++)
	{
		printf("%d", va_arg(numbers, int));
		if (d < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbers);
}
