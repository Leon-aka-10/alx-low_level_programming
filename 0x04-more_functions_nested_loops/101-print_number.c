#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int digit = n;

	if (n < 0)
	{
		_putchar('-');
		digit = -digit;
	}
	if ((digit / 10) > 0)
	{
		print_number(digit / 10);
	}
	_putchar((digit % 10) + '0');
}
