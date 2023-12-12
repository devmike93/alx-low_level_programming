#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert.
 * Return: the converted string.
 */

int _atoi(char *s)
{
	int i, j, sign;
	unsigned int result;

	sign = 0;
	result = 0;
	j = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
			j = 1;
		}
		else if (j == 1)
			break;
	}
	if (sign % 2 != 0)
		sign = -1;
	else
		sign = 1;
	return (result * sign);
}
