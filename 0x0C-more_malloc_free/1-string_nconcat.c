#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cout;
	unsigned int len1, len2, lenout, a;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	for (len1 = 0; *(s1 + len1) != '\0'; len1++)
		;
	for (len2 = 0; *(s2 + len2) != '\0'; len2++)
		;
	if (n >= len2)
		n = len2;
	lenout = len1 + n;
	cout = malloc(lenout + 1);

	if (!cout)
		return (NULL);
	for (a = 0; a < lenout; a++)
	{
		if (a < len1)
			cout[a] = s1[a];
		else
			cout[a] = s2[a - len1];
	}
	cout[a] = '\0';

	return (cout);
}
