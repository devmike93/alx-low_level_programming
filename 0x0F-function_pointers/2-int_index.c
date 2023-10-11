#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input integer array.
 * @size: size of the array.
 * @cmp: pointer to the function to be used
 * to compare values.
 *
 * Return: index of the first element for which the cmp
 * function does not return 0. If no elements matches,
 * return -1. If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (k = 0; k < size; k++)
			if (cmp(array[k]))
				return (k);
	}

	return (-1);
}
