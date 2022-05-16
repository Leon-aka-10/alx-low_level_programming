#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strlist;
	unsigned int a;
	char *str;

	va_start(strlist, n);
	for (a = 0; a < n; a++)
	{
		str = va_arg(strlist, char *);
		(!str) ? printf("(nil)") : printf("%s", str);
		if (separator && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strlist);
}
