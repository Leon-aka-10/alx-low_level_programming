#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int a, pf;

	a = 612852475143;
	for (pf = 2; pf <= a; pf++)
	{
		if (a % pf == 0)
		{
			a = pf / a;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
