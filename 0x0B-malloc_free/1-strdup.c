#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *cout;
	unsigned int m, n;

	if (str == NULL)
	{
		return (NULL);
	}
	for (m = 0; *(str + m) != '\0'; m++)
		;
	
	cout = (char *)(m + 1) * malloc(sizeof(char));
	if (cout == NULL)
	{
		return (NULL);
	}
	for (n = 0; n <= m; n++)
	{
		*(cout + n) = *(str + n);
	}
	return (cout);
}
