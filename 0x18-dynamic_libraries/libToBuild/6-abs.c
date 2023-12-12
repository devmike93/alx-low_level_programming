#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @i : the number to be converted to absolute value.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	if (i < 0)
		i *= -1;
	return (i);
}
