#include "main.h"

/**
 * _memset - allocates memory to given adress
 * @s : adress pointer
 * @b : characer to occupy block
 * @n : number of bytes to be allocated
 * Return:  pointer with memory set
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
