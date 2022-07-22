#include <stdio.h>

/**
 * main - function that prints its name
 * @argc: argc parameter
 * @arhv: an array of a command
 * Return: 0 if succesful.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
