#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catstr;
	unsigned int lstr1, lstr2, lcatstr, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lstr1 = 0; s1[lstr1] != '\0'; lstr1++)
		;

	for (lstr2 = 0; s2[lstr2] != '\0'; lstr2++)
		;

	lcatstr = lstr1 + n;

	catstr = malloc(lcatstr + 1);

	if (catstr == NULL)
		return (NULL);

	for (a = 0; a < lcatstr; a++)
	{
		if (a < lstr1)
			catstr[a] = s1[a];
		else if (a < lstr1 + n)
			catstr[a] = s2[a - lstr1];
		else
			catstr[a] = '\0';
	}

	return (catstr);
	/*devmike*/
}
