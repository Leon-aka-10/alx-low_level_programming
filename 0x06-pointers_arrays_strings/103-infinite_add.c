#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int x1, x2, eqn, num1, num2, temp, add = 0;

	for (x1 = 0; n1[x1] != '\0'; x1++)
	;
	for (x2 = 0; n2[x2] != '\0'; x2++)
	;
	if (x1 >= x2)
		temp = x1;
	else
		temp = x2;
	if (size_r <= temp + 1)
		return (0);
	*(r + (temp + 1)) = '\0';
	x1--, x2--, size_r--;
	num1 = n1[x1] - '0', num2 = n1[x2] - '0';
	while (temp >= 0)
	{
		eqn = num1 + num2 + add;
		if (eqn >= 10)
			add = eqn / 10;
		else
			add = 0;
		if (eqn > 0)
			r[temp] = (eqn % 10) + '0';
		else
			r[temp] = '0';
		if (x1 > 0)
			x1--, num1 = n1[x1] - '0';
		else
			num1 = 0;
		if (x2 > 0)
			 x2--, num2 = n2[x2] - '0';
		else
			num2 = 0;
		temp--, size_r--;
	}
	if (*(r) == 48)
		return (r + 1);
	else
		return (r);
}
