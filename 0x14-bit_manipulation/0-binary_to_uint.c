#include "main.h"

/**
 * binary_to_uint - converts binary number to number
 * @b: the binary digits
 * Return: the number or 0 if non binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0')
		{
			num <<= 1;
		}
		else if (*b == '1')
		{
			num = (num << 1) | 1;
		}
		else
			return (0);
		b++;
	}

	return (num);
}
