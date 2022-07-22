#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 if successful
 */
int main (int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
