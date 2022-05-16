#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int a;
	int *num;

	va_start(numlist, n);

	a = 0;

	while (a < n)
	{
		num = va_arg(numlist, int *);
		printf("%d", num);
		if (separator && a < n - 1)
			printf("%s", separator);
		a++;
	}
	printf("\n");
	va_end(numlist);
}
