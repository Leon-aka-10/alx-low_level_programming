#include "main.h"
/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 *
 */
void jack_bauer(void)
{
	int j, k, m, n;

	for (j = 48; j <= 50; j++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (m = 48; m <= 53; m++)
			{
				for (n = 48; n <= 57; n++)
				{
					if (j >= 50 && k >= 52)
					{
						break;
					}
					_putchar(j);
					_putchar(k);
					_putchar(58);
					_putchar(m);
					_putchar(n);
					_putchar('\n');
				}	
			}
		}
	}
}
