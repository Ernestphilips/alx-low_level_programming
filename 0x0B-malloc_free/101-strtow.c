#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_word(char *str);
char **strtow(char *str);

/**
 * word_len - locates the number marking the end
 * of first word within a string
 * @str: string to be searched
 * Return: number marking the end of the initial word pointed to str
 *
 */
int word_len(char *str)
{
	int n = 0, l = 0;

	while (*(str + n) && *(str + n) != ' ')
	{
		l++;
		n++;
	}

	return (l);
}

/**
 * count_words - counts the number of words in a string
 * @str: string to be searched
 * Return: number of words within str
 */
int count_words(char *str)
{
	int n = 0, w = 0, l = 0;

	for (n = 0; *(str + n); n++)
			l++;

	for (n = 0; n < l; n++)
	{
		if (*(str + n) != ' ')
		{
			w++;
			n += word_len(str + n);
		}
	}
	return (w);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: if str = NULL, str = "", or NULL when failed
 * otherwise - a pointer to arrays of strings (words)
 */
char **strtow(char *str)
{
	char **s;
	int n = 0, words, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[n] == ' ')
			n++;
		letter = word_len(str + n);
		s[w] = malloc(sizeof(char) * (letter + 1));

		if (s[w] == NULL)
		{
			for (; w >= 0; w--)
				free(s[w]);

			free(s);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
			s[w][l] = str[n++];

		s[w][l] = '\0';
	}
	s[w] = NULL;

	return (s);

}
