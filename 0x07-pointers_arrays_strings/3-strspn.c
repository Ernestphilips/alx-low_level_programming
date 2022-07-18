#include "main.h"

/**
 * _strspn - measures the length of a prefix string
 * @s: string to be searched
 * @accept: prefix to be measured
 * Return: number of bytes in s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)

		{
			if (*s == accept[a])
			{
				bytes++;
				break;
			}

			else if (accept[a + 1] == '\0')
			return (bytes);


	}

	s++;
	}

	return (bytes);
}
