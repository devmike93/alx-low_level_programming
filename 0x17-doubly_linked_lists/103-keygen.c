#include <stdio.h>
#include <string.h>

/**
  * main - generates a keygen for crackme5
  * @ac: argument count
  * @av: argument vectors
  * Return: 0 on success, -1 on failure
  */
int main(int ac, char **av)
{
	if (ac != 2 || strcmp(av[1], "julien"))
		return (-1);
	printf("o7DGQi\n");
	return (0);
}

