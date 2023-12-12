#include "main.h"
#include <stdio.h>

/**
 * _strspn - calculate the lenght of a prefix substring.
 * @s: pointer to the string to be analyzed.
 * @accept: pointer to the set of characters to be matched.
 * Return: the lenght of the initial segment of 's' containing only characters
 *    from 'accept'.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	unsigned int count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (!accept[j])
			break;
	}
	return (count);
}
