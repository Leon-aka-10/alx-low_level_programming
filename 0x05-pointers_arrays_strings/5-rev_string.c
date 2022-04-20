#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int length, a;
	char temp;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	length--;
	for (a = 0; a < length; a++)
	{
		temp = *(s + length);
		*(s + length) = *(s + a);
		*(s + a) = temp;
		length--;
	}
}
