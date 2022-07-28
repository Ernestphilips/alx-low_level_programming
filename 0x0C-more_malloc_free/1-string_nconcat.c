#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @n: unsigned integer
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * Return: if function fails - NULL, otherwise, a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = n, num;
	char  *concat;

	if (s1 == NULL)
		s1 == "";
	if (s2 == NULL)
		s2 = "";
	for (num = 0; s1[num]; num++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;
	for (num = 0; s1[num]; num++)
		concat[len++] = s1[num];
	for (num = 0; s2[num] && num < n; num++)
		concat[len++] = s2[num];
	concat[len] = '\0';
	return (concat);
}
