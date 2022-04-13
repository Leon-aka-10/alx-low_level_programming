#include <stdio.h>
/**
 * main - Prints the add of the Fibonacci numbers
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int a;
	long int n1, n2, fin;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (a = 0; a < 48; a++)
	{
		fin = n1 + n2;
		printf(", %ld", fin);
		n1 = n2;
		n2 = fin;
	}
	printf("\n");
	return (0);
}
