#include "main.h"

/**
 * _strlen -> prints the length of string
 * @s: The string to get the length of.
 *
 * Return: the length of @str.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);

}
