#include <stdio.h>

/**
 * swap_int - swap integers between given parameters
 * @a : first integer
 * @b :second interger
 */
void swap_int(int *a, int *b)
{
	int hold = *a;

	*a = *b;
	*b = hold;
}
