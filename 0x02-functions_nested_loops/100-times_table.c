#include "main.h"
/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 *
 */
void print_times_table(int n)
{
	int j, k, mul;

	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= 15; j++)
		{
			_putchar(48);
			for (k = 1; k <= 15; k++)
			{
				mul = j * k;
				_putchar(44);
				_putchar(32);
				if (mul <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mul + 48);
				}
				else if (mul <= 99)
				{
					_putchar(32);
					_putchar((mul / 10) + 48);
					_putchar((mul % 10) + 48);
				}
				else
				{
					_putchar(((mul / 100) % 10) + 48);
					_putchar(((mul / 10) % 10) + 48);
					_putchar((mul % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
