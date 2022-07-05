#include "main.h"

/**
 * main - program that prints 10 times the alphabet
 *
 *
 * Return: Always 0 if successful
 */

int main(void); void print_alphabet_x10(void)
{

int i;
int y;

for (y = 0; y < 10; y++)
{
for (i = 'a'; i <= 'z'; i++)

{
	_putchar(i);
}

	_putchar('\n');
}
}
