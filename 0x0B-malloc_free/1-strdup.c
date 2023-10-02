#include "main.h"
#include <stdlib.h>
/**
* _strdup - returns a pointer to a newly allocated space in memory.
* @str: string.
*
* Return: pointer of an array of chars
*/
char *_strdup(char *str)
{
	char *ptrstr;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	ptrstr = (char *)malloc(sizeof(char) * (a + 1));
	if (ptrstr == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		ptrstr[b] = str[b];
	return (ptrstr);
	/*devmike*/
}
