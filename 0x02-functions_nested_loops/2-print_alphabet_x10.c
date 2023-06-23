#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	int i;
	int j;

	for (j = 0; j < 10; i++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alphabet[i]);
		}
	}
	_putchar('\n');
}
