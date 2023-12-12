#include "main.h"

/**
 * _strncat - concatenates two strings and add a null byte.
 * @dest: represents a pointer to the destination string.
 * @src: represents a pointer to the source string.
 * @n: the maximum number of char to concatenate from src.
 * Return: a pointer to the resulting concatenated string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
		j++;
	for (i = 0; i < n && src[i] ; i++, j++)
		dest[j] = src[i];
	dest[j] = '\0';

	return (dest);
}
