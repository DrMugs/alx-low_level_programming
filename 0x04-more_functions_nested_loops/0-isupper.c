#include "main.h"

/**
 * _isupper - checks whether or not a letter is capital
 * @c: letter to be checked
 *
 * Return: 0 if lowercase and 1 if lowercse
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
