#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int length, a = 0;
	int div = length / 2;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	while (div--)
	{
		temp = s[length - (a - 1)];
		s[a] = temp;
		a++;
	}
}
