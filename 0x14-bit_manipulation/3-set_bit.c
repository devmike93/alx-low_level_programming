#include "main.h"

/**
 * set_bit - set a bit at given index into 1
 * @n: pointer to the integer
 * @index: point of bit change
 * Return: 1 if success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);

	*n = *n | (1U << index);

	return (1);
}
