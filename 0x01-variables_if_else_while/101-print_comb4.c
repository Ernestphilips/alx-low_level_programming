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
int m;
for (ch = 0; ch < 8; ch++)
{
for (n = ch + 1; n < 9; n++)
{
for (m = n + 1; m < 10; m++)

{
putchar((ch % 10) + '0');
putchar((n % 10) + '0');
putchar((m % 10) + '0');

if (ch == 7 && n == 8 && m == 9)
continue;
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
