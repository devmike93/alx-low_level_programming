#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest.
 * @dest: the pointer to the string
 * @src: the pointer to the buffer.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
