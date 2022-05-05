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
	cout = malloc(sizeof(int *) * height);
	if (cout == NULL)
	{
		free(cout);
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		*(cout + m) = malloc(size(int) * width);
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
	for (m = 0, n = 0; m < height, n < width; m++, n++)
	{
		cout[m][n] = 0;
	}
	return (cout);
}
