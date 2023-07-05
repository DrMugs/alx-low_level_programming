#include "main.h"

/**
 * _pow_recursion - returns power raised tothe power of y
 * @x : bse number
 * @y : the exponent
 * Return: the total
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
