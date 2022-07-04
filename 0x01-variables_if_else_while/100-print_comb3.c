#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int ch;
int n;
for (ch = 0; ch < 9; ch++)
{
for (n = ch + 1; n < 10; n++)
{
	putchar((ch % 10) + '0');
	putchar((n % 10) + '0');

if (ch == 8 && n == 9)
continue;
{
	putchar(44);
	putchar(32);
}
}
}
putchar('\n');
return (0);
}
