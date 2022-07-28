#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: parameter
 * @size: size of unsigned int
 * Return: if nmemb = 0, size = 0, function fail - NULL,
 * otherwise, a pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int num;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	filler = mem;
	for (num = 0; num < (size * nmemb); num++)
	{
		filler[num] = '\0';
	}
	return (mem);
}
