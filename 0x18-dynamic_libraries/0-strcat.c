#include "main.h"
#include <string.h>

/**
 * strcat - concatenates the string pointed to and by @src
 * including terminating null byte, to the end of the string
 * pointed to by @dest
 * @src: source string to be appended to the @dest
 * @dest: a pointer to the string to be concatenated upon.
 * Return: a pointer to the destination string @dest.
 */

char *strcat(char *dest, const char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
