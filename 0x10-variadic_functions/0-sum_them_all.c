#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its elements.
 * @n: The number of elements passed to the function.
 * @...: A variable number of elements to calculate the sum of.
 * Return: If n == 0 - 0.
 * Otherwise - the sum of all elements.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int d, sum = 0;

	va_start(nums, n);

	for (d = 0; d < n; d++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
