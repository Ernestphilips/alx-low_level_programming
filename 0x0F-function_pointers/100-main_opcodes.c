#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @agrc: The number of arguments supplied to program.
 * @argv: An array of pointers to arguments.
 * Return: 0 if successful.
 */
int main(int argc, char *argv[])
{
	int  bytes, d;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (d = 0; d < bytes; d++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (d == bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
