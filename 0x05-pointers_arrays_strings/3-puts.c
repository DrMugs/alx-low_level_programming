#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints string
 * @str : stringto be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(*str); i++)
	{
		_putchar(str[i]);
	}

	_putchar('/n');
}
