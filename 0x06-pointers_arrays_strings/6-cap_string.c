#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int num = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (s[num] >= 'a' && s[num] <= 'z')
	{
		s[num] = s[num] - 32;
	}
	num++;
	for (num = 0; s[num] != '\0'; num++)
	{
		for (i = 0; i < 13; i++)
		{
			if (s[num] == sep_words[i])
			{
				if ((s[num + 1] >= 'a') && (s[num + 1] <= 'z'))
				{
					s[num + 1] = s[num + 1] - 32;
				}
				break;
			}
		}
	}
	return (s);
}
