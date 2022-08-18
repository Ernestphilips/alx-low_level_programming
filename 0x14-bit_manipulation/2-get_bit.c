#include "main.h"

/**
 * get_bit - function that returns the value of
 * a bit at a given index.
 * @index: integer
 * @n: the bit.
 * Return: the value of the bit at index or -1 if
 * error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
