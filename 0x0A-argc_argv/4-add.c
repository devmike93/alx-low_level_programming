#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int k, k, count = 0;

	for (k = 1; k < argc; k++)
	{
		for (k = 0; argv[k][k] != '\0'; k++)
		{
			if (!isdigit(argv[k][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[k]);
	}
	printf("%d\n", count);
	return (0);
}
