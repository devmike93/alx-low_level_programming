#include "main.h"

/**
 * _strchr - locates the first occurence of a character in the string.
 * @s: pointer to the string to be searched.
 * @c: the character to be located.
 * Return: a pointer to the first occurence of the character in the string.
 *   or a NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);
}

