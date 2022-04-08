#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m;
	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);



}
