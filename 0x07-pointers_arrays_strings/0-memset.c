#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @n: an integer
 * @b: a character
 * @s: string
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
