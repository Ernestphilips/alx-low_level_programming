#include  "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: the passed args
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
	x *= -1;

	_putchar(x + '0');
	return (x);
}
