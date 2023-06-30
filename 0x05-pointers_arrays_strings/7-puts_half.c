#include "main.h"

/**
 * puts_half - prints half
 * @str : to beprinted
 */
void puts_half(char *str)
{
	int count, q, i;

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
	{
		for (i = count / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (count % 2)
	{
		for (q = (count - 1) / 2; q < count - 1; q++)
		{
			_putchar(str[q + 1]);
		}
	}
	_putchar('\n');
}
