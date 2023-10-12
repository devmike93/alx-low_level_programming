#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list newlist;
	unsigned int k;
	char *string;

	va_start(newlist, n);

	for (k = 0; k < n; k++)
	{
		string = va_arg(newlist, char *);

		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}

		if (k < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(newlist);
}
