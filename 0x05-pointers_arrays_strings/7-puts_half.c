#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */

void puts_half(char *str)
{
	int len;
	int a;

	for (len = 0; len >= 0; len++)
	{
		if (str[len] == '\0')
		{
			break;
		}
	}
	if (len % 2 == 1)
	{
		a = len / 2;
	}
	else 
	{
		a = (len - 1) / 2;
	}
	for (a++; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
