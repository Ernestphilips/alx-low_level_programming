#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be searched.
 * @needle: substring to be located.
 * Return: If the string is located, a pointer
 * to the beginning of the substring. If no - Null.
 */

char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);

				a++;

			} while (haystack[a] == needle[a]);
		}

		haystack++;
	}

	return ('\0');
}
