#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbrs
 * @separator : string between nunmbers
 * @n : number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator != NULL && i != (n - 1))
				printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
