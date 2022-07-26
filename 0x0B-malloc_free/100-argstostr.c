#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments into the program
 * @ac: number of arguments passed to the program
 * @av: array of pointers
 * Return: NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}

	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			s[i++] = av[a][b];

		s[i++] = '\n';
	}

	s[size] = '\0';

	return (s);
}
