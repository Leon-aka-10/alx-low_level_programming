#include "main.h"
/**
 * _isalpha - prints 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123 || c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
