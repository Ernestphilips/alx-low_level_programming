#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary
 * number to an unsigned int.
 * @b: is a pointer to a string 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, m = 1;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * m;
		m *= 2;
	}

	return (num);
}

