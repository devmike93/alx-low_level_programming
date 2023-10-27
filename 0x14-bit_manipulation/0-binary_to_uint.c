#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: pointer to string of 0 and 1
 * Return: converted unsigned int or NULL otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uns = 0;
	int k;

	if (b == NULL)
		return (0);

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);

		uns = (uns << 1) + (b[k] - '0');
	}

	return (uns);
}
