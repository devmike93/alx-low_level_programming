#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to the integer
 * @index: te index
 * Return: 1 if works, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
