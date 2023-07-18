#include "main.h"

/**
 * _isdigit - checks if a number is between 0 nad 9
 * @c : digit to be checkede
 *
 * Return: 1 if the number is digit and 0mif no
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
