#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int m, n, mul;

	for (m = 0; m <= 9; m++)
	{
		_putchar(48);
		for (n = 1; n <= 9; n++)
		{
			mul = m * n;
			_putchar(44);
			_putchar(32);
			if (mul <= 9)
			{
				_putchar(32);
				_putchar(mul + 48);
			}
			else
			{
				_putchar((mul / 10) + 48);
				_putchar((mul % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
