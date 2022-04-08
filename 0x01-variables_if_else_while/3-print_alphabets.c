#include <stdio.h>
/**
 * main - Prints alphabets in both upper and lower cases.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxydABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 52; a++)
	{
		putchar(alpha[a]);
	}
	putchar('\n');
	return (0);
}
