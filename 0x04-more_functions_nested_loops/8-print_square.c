#include "main.h"

/**
 * print_square - prints hashes squares.
 * @size: size of the square.
 * Return: no return.
 */

void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		if (a != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
