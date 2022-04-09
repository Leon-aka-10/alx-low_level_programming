#include <stdio.h>
/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d, eqn1, eqn2;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					eqn1 = (c * 10 ) + b;
					eqn1 = (a * 10 ) + d;
					if (eqn1 < eqn2)
					{
						putchar(c);
						putchar(b);
						putchar(' ');
						putchar(a);
						putchar(d);
						if (a == 57 && b == 56 && c == 57 && d == 57)
						{
							break;
						}
						putchar(',');
						putchar(' ');

					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
