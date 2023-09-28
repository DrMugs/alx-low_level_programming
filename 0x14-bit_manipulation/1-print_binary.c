#include "main.h"

/**
 * print_binary - numbers are pritnted to binary
 * @n : the value to converted
 */

void print_binary(unsigned long int n)
{
	int j = 63, cnt = 0;
	unsigned long int variable;

	while (j >= 0)
	{
		variable = n >> j;

		if (variable & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
		j--;
	}

	if (!cnt)
		_putchar('0');
}
