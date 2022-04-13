#include <stdio.h>
/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	long int n1, n2, fin, efin;

	n1 = 1;
	n2 = 2;
	fin = efin = 0;
	while (fin <= 4000000)
	{
		fin = n1 + n2;
		n1 = n2;
		n2 = fin;
		if ((n1 % 2) == 0)
		{
			efin += n1;
		}
	}
	printf("%ld\n", efin);
	return (0);
}
