#include "main.h"
#include <string.h>

/**
 * print_rev -> prints a string in reverse
 * @s: The string to be printed
 */

void print_rev(char *s)
{
	int i, y;

	y = strlen(s);

	for (i = y - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

