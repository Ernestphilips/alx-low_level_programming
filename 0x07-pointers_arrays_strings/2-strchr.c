#include "main.h"

/**
 * _strchr - locates a character in string
 * @c: character
 * @s: string
 *
 * Return: c is found. Null if c is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for  (a = 0; s[0] >= '\0'; a++)
	{
		if (s[0] == c)
		return (s + a);

	}

	return ('\0');
}
