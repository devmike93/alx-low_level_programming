#include "main.h"

/**
 * _memset - fills a memory block with a specified value.
 * @s: pointer to memory to be filled.
 * @b: the value to be set.
 * @n: the number of bytes to be set.
 * Return: pointer to the memory area after filling.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
