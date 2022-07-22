#include <stdio.h>

/**
 * main - function prints all arguments  it receives
 * @argc: argc parameter
 * @argv: an array of commands listed
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
