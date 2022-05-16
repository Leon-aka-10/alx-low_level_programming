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
	unsigned int a, b, c = 0;
	char *str;
	const char all_arg[] = "cifs";

	va_start(alpnumlist, format);

	a = 0;

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
			printf("%c", va_arg(alpnumlist, char));
			break;
		case 'i':
			printf("%d", va_arg(alpnumlist, int));
			break;
		case 'f':
			printf("%f", va_arg(alpnumlist, float));
			break;
		case 's':
			str = va_arg(alpnumlist, char *);

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
