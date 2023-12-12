#include "main.h"

/**
 * _strlen - calculate the lenght of a string.
 * @s: the string to be measured.
 * Return: the number of bytes in the string pointed by s.
 */

int _strlen(char *s)
{
	int len, i;

	len = 0;

	for (i = 0; *(s + i); i++)
		len += 1;
	return (len);
}
