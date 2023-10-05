#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the array.
* @height: height of the array.
*
* Return: pointer of an array of integers
*/
int **alloc_grid(int width, int height)
{
	int **matrixout;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	matrixout = malloc(height * sizeof(int *));

	if (matrixout == NULL)
	{
		free(matrixout);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		matrixout[a] = malloc(width * sizeof(int));
		if (matrixout[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(matrixout[a]);
			free(matrixout);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			matrixout[a][b] = 0;

	return (matrixout);
	/*devmike*/
}
