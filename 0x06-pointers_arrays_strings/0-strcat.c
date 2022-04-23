#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	;
	for (j = 0; j >= 0; j++)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (dest);
}

