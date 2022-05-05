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
	int **cout;
	int m, n;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	cout = malloc(height * sizeof(int *));
	if (cout == NULL)
	{
		free(cout);
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		*(cout + m) = malloc(width * sizeof(int));
		if (*(cout + m) == NULL)
		{
			while (m >= 0)
			{
				free(*(cout + m));
				m--;
			}
			m--;
			free(cout);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			cout[m][n] = 0;
		}
	}
	return (cout);
}
