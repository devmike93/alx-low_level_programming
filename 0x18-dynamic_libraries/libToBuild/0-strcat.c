#include "main.h"

/**
 * _strcat - concatenates two strings and add a null byte.
 * @dest: represents a pointer to the destination string.
 * @src: represents a pointer to the source string.
 * Return: a pointer to the resulting concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
		j++;

	for (i = 0; src[i]; i++, j++)
		dest[j] = src[i];
	dest[j] = '\0';

	return (dest);
}

