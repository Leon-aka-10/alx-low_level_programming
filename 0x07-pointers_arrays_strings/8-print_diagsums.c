#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */

void print_diagsums(int *a, int size)
{
	int x,  add1 = 0, add2 = 0;

	for (x = 0; x < pow(size, 2); x++)
	{
		if (x % (size + 1) == 0)
		{
			add1 += a[x];
		}
		if (x % (size - 1) == 0 && x != 0 && x < pow(size, 2) - 1)
		{
			add2 += a[x];
		}
	}
	printf ("%d, %d\n", add1, add2);
}
