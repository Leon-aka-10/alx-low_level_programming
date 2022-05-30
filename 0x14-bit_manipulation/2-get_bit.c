#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num = 0;

	if (!n && index < 64)
		return (0);

	for (; num < 64; n >>= 1, num++)
	{
		if (index == num)
			return (n & 1);
	}
	return (-1);
}
