#include <stdio.h>

/**
 * _strlen - calculate length of string
 * @s : string whose lenth is measured
 *
 * Return: size of string as integer 0
 */
int _strlen(char *s)
{
	return (sizeof(s) / sizeof(s[0]));
}
