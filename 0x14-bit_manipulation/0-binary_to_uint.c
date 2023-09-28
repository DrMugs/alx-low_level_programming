#include "main.h"

/**
 * binary_to_uint - makes binary number to numerial
 * @b: the binary number
 * Return: the numerial value or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int variable = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0')
		{
			variable <<= 1;
		}
		else if (*b == '1')
		{
			variable = (variable << 1) | 1;
		}
		else
			return (0);
		b++;
	}

	return (variable);
}
