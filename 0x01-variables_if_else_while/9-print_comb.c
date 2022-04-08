#include <stdio.h>
/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);

		if (a != 57)
		{
			putchar(',');
			putchar('\t');
		}
	}
	putchar('\n');
	return (0);
}
