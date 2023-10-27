#include "main.h"

/**
 * get_bit - gets a bit from an index provided
 * @n: number to get from
 * @index: index to serch with
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(int) * 8;
	int bit = -1;

	if (index <= size)
	{
		bit = (n >> index) & 1;
	}

	return (bit);
}
