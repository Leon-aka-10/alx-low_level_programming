#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */

int _atoi(char *s)
{
	int a;
	int b = 0;
	int c = -1;
	int d = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
		{
			c = c * -1;
		}
		if (s[a] >= '0' && s[a] < '9')
		{
			b = b * 10;
			b -= (s[a] - '0');
			d = 1;
		}
		else if (d == 1)
		{
			break;
		}
	}
	b = c * b;
	return (b);
}
