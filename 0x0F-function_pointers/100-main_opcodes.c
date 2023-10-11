#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodess of its own main function.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *opcodes = (char *) main;
	int k, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (k = 0; k < nbytes; k++)
	{
		printf("%02x", opcodes[k] & 0xFF);
		if (k != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
