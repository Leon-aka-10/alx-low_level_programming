#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = 97; k < 123; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
	
}
