#include "main.h"

/**
 * _strpbrk - searches a string for the first occurence of any character
 *            from a given set.
 * @s: a pointer to the string to be searched.
 * @accept: a pointer to the set of characters to be matched.
 * Return: a pointer to the byte in s that matches the one of
 *         the bytes in 'accept', or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
