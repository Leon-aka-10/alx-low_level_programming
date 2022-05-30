#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len, bin;

	if (b == NULL)
		return (0);

	len = 0;
	while (b[len] != '\0')
		len++;

	for (len--, bin = 1; len >= 0; len--, bin << 1)
	{
		if (b[len] != 48 && b[len] != 49)
			return (0);

		if (b[len] & 1)
			num += bin;
	}
	return (num);
}
