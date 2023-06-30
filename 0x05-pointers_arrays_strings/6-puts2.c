#include "main.h"

/**
 * puts2 - prints every other string
 * @str : string to be peinted
 */
void puts2(char *str)
{
	int count, i;

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
