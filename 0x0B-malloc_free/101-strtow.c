#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: no return
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(*(grid + height));
			height--;
		}
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of an array of integers
 */

char **strtow(char *str)
{
	char **cout;
	unsigned int a, b, c, d, height;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = height = 0; str[a] != '\0'; a++)
	{
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			height++;
		cout = malloc((height + 1) * sizeof(char *));
		if (cout ==  NULL || height == 0)
		{
			free(cout);
			return (NULL);
		}
		for (b = d = 0; b < height; b++)
		{
			for (a = d; str[a] != '\0'; a++)
			{
				if (str[a] == ' ')
					d++;
				if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
				{
					cout[b] = malloc((a - d + 2) * sizeof(char));
					if (cout[b] = NULL)
					{
						ch_free_grid(cout, b);
						return (NULL);
					}
					break;
				}
			}
			for (c = 0; d <= a; d++, c++)
			{
				cout[b][c] = str[d];
			}
			cout[b][c] = '\0';
		}
		cout[b] = NULL;
		return (cout);
		        
	}
}
