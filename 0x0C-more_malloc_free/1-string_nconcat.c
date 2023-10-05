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
	char *strout;
	unsigned int lstr1, lstr2, lsout, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lstr1 = 0; s1[lstr1] != '\0'; lstr1++)
		;

	for (lstr2 = 0; s2[lstr2] != '\0'; lstr2++)
		;

	if (n > lstr2)
		n = lstr2;

	lsout = lstr1 + n;

	strout = malloc(lsout + 1);

	if (strout == NULL)
		return (NULL);

	for (k = 0; k < lsout; k++)
		if (k < lstr1)
			strout[k] = s1[k];
		else
			strout[k] = s2[k - lstr1];

	strout[k] = '\0';

	return (strout);
}
