#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
