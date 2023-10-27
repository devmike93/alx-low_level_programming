#include "main.h"
#include <stdio.h>

/**
 * print_binary - takes a decimal and
 * conv it to binary
 * @n: decimal to convert
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		if (n > 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
