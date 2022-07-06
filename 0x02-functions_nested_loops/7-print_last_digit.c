#include  "main.h"

/**
 * print_last_digit ->  print the last digit
 * @n: the passed args
 * Return: 0 if succesful
 */

int main(void); int print_last_digit(int n)
{
	int n;
	int y;

	if (n < 0)
	n = -n;
	y = n % 10;
	_putchar(y + '0');
return (y);
}
