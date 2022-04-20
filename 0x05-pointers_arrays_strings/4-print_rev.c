#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */

void print_rev(char *s)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a--;
	}
	_putchar('\n');
}
