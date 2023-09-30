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
	int l, m, count = 0;

	for (l = 1; l < argc; l++)
	{
		for (m = 0; argv[l][m] != '\0'; m++)
		{
			if (!isdigit(argv[l][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		count += atoi(argv[l]);
	}
	printf("%d\n", count);
	return (0);
}
