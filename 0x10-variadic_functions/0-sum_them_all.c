#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - add all the given valuues
 * @n : number of variables
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list variables;

	if (n == 0)
		return (0);

	va_start(variables, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(variables, int);

		sum += x;
	}

	va_end(variables);
	return (sum);
}
