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
for (ch = 48; ch <= 56; ch++)
{
for (n = 49; n <= 57; n++)
{
if (n > ch)
{
	putchar(ch);
	putchar(n);

if (ch != 56 || n != 57)
{
	putchar(44);
	putchar(32);
}
}
}
}
return (0);
}
