#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates the first occurrence of a substring in a string.
 * @haystack: a pointer to the string to be searched.
 * @needle: a pointer to the substring to search for.
 * Return: a pointer to the beginning of the located substring 'needle'
 *         within the string 'haystack', or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] != needle[j])
				break;
			i++;
		}
		if (!needle[j])
			return (&haystack[i - j]);
		i -= j;
	}
	return (0);
}
