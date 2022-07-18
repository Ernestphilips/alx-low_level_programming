#include  "main.h"

/**
 * _memcpy - function that copies bytes to memory area
 * @dest: destination memory
 * @src: source memory
 * @n: integer
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
