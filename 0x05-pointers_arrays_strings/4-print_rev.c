#include "main.h"

/**
 * print_rev -> prints a string in reverse
 * @s: The string to be printed
 */

void print_rev(char *s)
{
	int y = 0, index;

	while (s[index++])
		y++;

	for (index = y - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}

