#include "main.h"

/**
 * _prinnt_rev_recursion - print stringinreverse
 * @s : sting in question
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
