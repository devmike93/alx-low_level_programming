#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings (s1 and s2).
 * @s1: pointer to the first string.
 * @s2: pointer to the second string.
 * Return: a integer indicating the comparaison result:
 *  - if the return is 0 the two strings are the same,
 *  - if the return is negative number, s1 is less than s2,
 *  - if the return is postive number, s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i, a;

	for (i = 0; s1[i] || s2[i]; i++)
	{
		a = s1[i] - s2[i];
		if (a != 0)
			break;
	}
	return (a);
}

