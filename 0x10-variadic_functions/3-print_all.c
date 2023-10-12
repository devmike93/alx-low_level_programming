#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	va_list newlist;
	unsigned int k = 0, m, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(newlist, format);
	while (format && format[k])
	{
		m = 0;
		while (t_arg[m])
		{
			if (format[k] == t_arg[m] && c)
			{
				printf(", ");
				break;
			} m++;
		}
		switch (format[k])
		{
		case 'c':
			printf("%c", va_arg(newlist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(newlist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(newlist, double)), c = 1;
			break;
		case 's':
			str = va_arg(newlist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} k++;
	}
	printf("\n"), va_end(newlist);
}
