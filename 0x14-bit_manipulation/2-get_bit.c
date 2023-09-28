#include "main.h"

/**
 * get_bit - get bit value at index
 * @n: the int
 * @index: indx
 * Return: bit vlaue at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int murungu;

	if (index > 63)
		return (-1);
	murungu = (n >> index) & 1;

	return (murungu);
}

