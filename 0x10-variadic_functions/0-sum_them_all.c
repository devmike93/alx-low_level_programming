#include "variadic_functions.h"

/**
 * sum_them_all - returns the count of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: count of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list newlist;
	unsigned int k;
	int count = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(newlist, n);

	for (k = 0; k < n; k++)
	{
		count += va_arg(newlist, int);
	}

	va_end(newlist);

	return (count);
}
