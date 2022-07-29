#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * find_len - finds the length of a string
 * @str: string to be measured
 * Return: the length of the string
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_xarray - creates an array of chars, initializes it with
 * the character 'x'
 * @size: size of array
 * Description: if there is no sufficient space, function exits
 * with status 98
 * Return: pointer to the array.
 */
char *create_xarray(int size)
{
	char *array;
	int num;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (num = 0; num < (size - 1); num++)
		array[num] = 'x';

	array[num] = '\0';

	return (array);
}

/**
 * iterate_zeroes - iterates through a string of numbers
 * @str: string of numbers to be iterated
 * Return: pointer to the next non-zero element
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);

}

/**
 * get_digit - converts a digit character to int
 * @c: the character to be converted
 *
 * Description: if c is a non-digit, the function exits with
 * status, 98.
 * Return: converted int.
 */

int get_digit(char c)
{
	int d = c - '0';

	if (d < 0 || d > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (d);
}

/**
 * get_prod - multiplies string of numbers by a single digit
 * @prod: buffer to store the result
 * @mult: string of numbers
 * @digit: single digit
 * @zeroes: necessary number of leadong zeroes
 * Description: if mult has a non-digit in it, the function exits
 * with status value, 98
 */
void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
			prod--;
	}
	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

	num = (*mult - '0') * digit;
	num += tens;
	*prod = (num % 10) + '0';
	tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - add numbers stored in two strings
 * @final_prod: buffer storing the running final product
 * @next_prod: next product to be added
 * @next_len:  length of the next_prod
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;
	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num +=  tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;


		next_prod--;
		next_len--;
	}
	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;

	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 * @argv: numbers of argument passed to program
 * @argc: array of pointers to the argument
 *
 * Description: if the number of arguments is incorrect or
 * one has a non-digits, function exits with 98
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, num, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1]	= iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_prod = create_xarray(size + 1);
	next_prod = create_xarray(size + 1);


	for (num = find_len(argv[2]) - 1; num >= 0; num--)
	{
		digit = get_digit(*(argv[2] + num));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}

	for (num = 0; final_prod[num]; num++)
	{
		if (final_prod[num] != 'x')
			putchar(final_prod[num]);
	}

	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
