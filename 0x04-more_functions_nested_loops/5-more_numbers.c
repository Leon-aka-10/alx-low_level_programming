#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 48; b < 62; b++)
		{
			if (b >= 58)
			{
				_putchar(b / 10);
			}
			_putchar(b % 10);
		}
		_putchar('\n');
	}
}
