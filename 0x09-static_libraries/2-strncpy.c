#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s;

	for (s = 0; s < n && *(src + s) != '\0'; s++)
	{
		*(dest + s) = *(src + s);
	}
	while (s < n)
	{
		*(dest + s) = '\0';
		s++;
	}
	return (dest);
}
