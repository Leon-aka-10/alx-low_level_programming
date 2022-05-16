#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	va_list alpnumlist;
	unsigned int a = 0, b, c = 0;
	char *str;
	const char all_arg[] = "cifs";

	va_start(alpnumlist, format);
	while (format && format[a])
	{
		b = 0;

		while (all_arg[b])
		{
			if (format[a] == all_arg[b] && c)
			{
				printf(", ");
				break;
			}
			b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(alpnumlist, char)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(alpnumlist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(alpnumlist, float)), c = 1;
			break;
		case 's':
			str = va_arg(alpnumlist, char *), c = 1;

			if (str)
			{
				printf("%s", str);
				break;
			}
			printf("(nil)");
			break;
		}
		a++;
	}
	printf("\n");
	va_end(alpnumlist);
}
