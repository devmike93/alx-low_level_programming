#include "main.h"

/**
 * flip_bits - returns the num of bits you would need
 * to flipped to get from one num to another
 * @n: first num
 * @m: second num
 * Return: num of bits
 */

unsigned int flip_bits(unsigned long int n,  unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned int count = 0;

	while (flipped != 0)
	{
		count++;
		flipped &= (flipped - 1);
	}

	return (count);
}
