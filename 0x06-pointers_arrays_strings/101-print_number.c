#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int i, j, num;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = i;

	j = i;
	num = 1;

	for (; j > 9;  j /= 10)
	{
		num *= 10;
	}

	for (; num >= 1; num /= 10)
	{
		_putchar(((i / num) % 10) + '0');
	}
}
