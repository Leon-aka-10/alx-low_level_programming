#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */

int _atoi(char *s)
{
	int sig = 1;
	unsigned int digit = 0;

	do {
		if (*s == '-')
		{
			sig = sig * -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = (digit * 10) + (*s - '0');
		}
		else if (digit > 0)
		{
			break;
		}
	} while (*s++);
	return (digit * sig);
}
