#include "main.h"

/**
 * _isupper - checks if a character is uppercase.
 * @c: character to be checked.
 * Return: 1 if character is uppercase, 0 otherwies.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
