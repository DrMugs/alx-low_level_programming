#include "main.h"

/**
 * print_binary - prints number to binary
 * @n : the number to be coverted
 */

void print_binary(unsigned long int n)
{
	int i = 63, count = 0;

	unsigned long int num;

	while (i >= 0)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');

		i--;
	}

	if (!count)
		_putchar('0');
}
