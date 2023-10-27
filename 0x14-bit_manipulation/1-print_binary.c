#include "main.h"
#include <stdio.h>

/**
 * print_binary - takes a decimal and
 * conv it to binary
 * @n: decimal to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n / 2);
	}
	_putchar((n % 2) + '0');
}
