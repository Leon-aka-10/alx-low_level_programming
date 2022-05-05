#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char *cout;
	int a, b, c, d;

	if (ac == 0)
	{
		return (NULL);
	}
	for (a = b = 0; b < ac; b++, a++)
	{
		if (av[b] == NULL)
		{
			return (NULL);
		}
		for (c = 0; av[b][c] != '\0'; c++, a++)
		;
	}
	cout = malloc((c + 1) * sizeof(char));
	if (cout == NULL)
	{
		free(cout);
		return (NULL);
	}
	for (b = c = d = 0; d < c; c++, d++)
	{
		if (av[b][c] == '\0')
		{
			cout[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
		{
			cout[d] = av[b][c];
		}
	}
	cout[d] = '\0';
	return (cout);
}
