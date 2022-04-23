#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string.
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int num = 0, i;
	int low_alph[] = {97, 101, 111, 116, 108};
	int up_alph[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	for (num = 0; s[num] != '\0'; num++)
	{
		for (i = 0; i < 5; i++)
		{
			if (s[num] == low_alph[i] || s[num] == up_alph[i])
			{
				s[num] = numbers[i];
				break;
			}
		}
	}
	return (s);
}
