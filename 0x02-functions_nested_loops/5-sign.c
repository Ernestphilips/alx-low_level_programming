#include "main.h"

/**
 * main - write a function that prints the sign of a number
 * @n: args
 * Return: 1, 0, -1
 */

int main(void); int _print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
else if  (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
