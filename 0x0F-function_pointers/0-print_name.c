#include "function_pointers.h"

/**
 * print_name - prints name
 * @name : to be printed
 * @f : fuction to be called
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
