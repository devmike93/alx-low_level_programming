#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars.
* @size: size of the array.
* @c: stored char
*
* Return: pointer of an array of chars
*/
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *ctx;

	if (size == 0)
	return (NULL);

	ctx = malloc(sizeof(c) * size);

	if (ctx == NULL)
	return (NULL);

	for (k = 0; k < size; k++)
	ctx[k] = c;
	return (ctx);
}
