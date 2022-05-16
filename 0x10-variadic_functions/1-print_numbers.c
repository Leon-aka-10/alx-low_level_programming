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
	int numbers;

	va_start(numlist, n);
	numbers = va_arg(numlist, int);

	a = 0;
	while (a < n)
	{
		printf("%d", numbers);
		a++;
		if (separator && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");


	va_end(numlist);
}
