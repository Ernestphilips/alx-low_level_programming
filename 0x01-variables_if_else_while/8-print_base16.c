#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; n++)
{
putchar(n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(10);
return (0);
}
