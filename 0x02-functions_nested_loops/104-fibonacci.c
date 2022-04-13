#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	int a, bool1, bool2;
	long int n1, n2, fin1, fin2, n3, n4;

	n1 = 1;
	n2 = 2;
	bool1 = bool2 = 1;
	printf("%ld, %ld", n1 n2);
	for (a = 0; a < 96; a++)
	{
		if (bool1)
		{
			fin1 = n1 + n2;
			printf(", %ld", fin1);
			n1 = n2;
			n2 = fin1;
		}
		else if (bool2)
		{
			n3 = n1 % 1000000000;
			n4 = n2 % 1000000000;
			n1 = 
		}
	}
}
