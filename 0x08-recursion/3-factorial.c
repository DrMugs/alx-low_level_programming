#include "main.h"

/**
 * factorial - calculates teh factorial
 * @n : number to be factored
 * Return: the total factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
