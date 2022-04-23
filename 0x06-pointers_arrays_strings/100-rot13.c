#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int num = 0, i;
	char alph[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (num = 0; s[num] != '\0'; num++)
	{
		for (i = 0; i < 52; i++)
		{
			if (s[num] == alph[i])
			{
				s[num] = rot13[i];
				break;
			}
		}
	}
	return (s);
}
