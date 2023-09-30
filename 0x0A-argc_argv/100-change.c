#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount.
 * of money.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int pesewas, ncedis = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	pesewas = atoi(argv[1]);

	while (pesewas > 0)
	{
		if (pesewas >= 25)
			pesewas -= 25;
		else if (pesewas >= 10)
			pesewas -= 10;
		else if (pesewas >= 5)
			pesewas -= 5;
		else if (pesewas >= 2)
			pesewas -= 2;
		else if (pesewas >= 1)
			pesewas -= 1;
		ncedis += 1;
	}
	printf("%d\n", ncedis);
	return (0);
}
