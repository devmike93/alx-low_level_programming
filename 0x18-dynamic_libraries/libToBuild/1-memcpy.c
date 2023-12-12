#include "main.h"

/**
 * _memcpy - copies a specified number of bytes from .
 * @dest: pointer to the destination memory block.
 * @src: a pointer to the source memory block.
 * @n: the number of bytes to be copied.
 * Return: pointer to the destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
