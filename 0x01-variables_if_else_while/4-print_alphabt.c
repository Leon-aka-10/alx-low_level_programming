#include <stdio.h>
/**
 * main - Prints lower case alphabets except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		purchar(alpha[a]);
	}
	putchar('\n');
	return (0);
}
