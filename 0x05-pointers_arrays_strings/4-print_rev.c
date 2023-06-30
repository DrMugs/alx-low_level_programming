#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s : stringto be reversed
 */
void print_rev(char *s)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
