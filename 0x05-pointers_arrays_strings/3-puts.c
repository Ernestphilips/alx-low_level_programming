#include  "main.h"

/**
 * _puts -> prints a string stdout
 * @str: to print string
 *
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
