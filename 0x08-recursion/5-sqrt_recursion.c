#include "main.h"

/**
 * sqroot - checks if sqaure root is avalable and returns if available
 * @x : the number
 * @y : control
 * Return: the root
 */
int sqroot(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + sqroot(x, y + 1));
}
/**
 * _sqrt_recursion - returns natural square-root number
 * @n : number to be rooted
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqroot(n, 2));
}
