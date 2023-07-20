#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all given variables
 * @format : show the format of thje items to be printed
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *separator;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s", separator);
					printf("%c", va_arg(args, int));
					break;
				case 'f':
					printf("%s", separator);
					printf("%f", va_arg(args, double));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nill)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
