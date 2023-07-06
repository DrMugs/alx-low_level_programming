#include "main.h"

/**
 * prime_num - checks for a prime number
 * @x: input
 * @y: recurcsion
 * Return: 1 for prime number and x otherwise
 */
int prime_num(int x, int y)
{
	if (x % y == 0)
	{
		if (x == y)
			return (1);
		else
			return (0);
	}
	return (0 + prime_num(x, y + 1));
}
/**
 * is_prime_number - checks number is a prime number
 * @n: number tobe checked
 * Return: 1 if prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_num(n, 2));
}
