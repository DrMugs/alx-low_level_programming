#include "main.h"

/**
 * get_bit - get value of a bit at index
 * @n: the long int
 * @index: index
 * Return: value of bit at index or -1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int beet;

	if (index > 63)
		return (-1);
	beet = (n >> index) & 1;

	return (beet);
}

