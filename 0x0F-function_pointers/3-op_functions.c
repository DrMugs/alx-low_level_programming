#include "3-calc.h"
#include <stdio>

/**
 * op_add -  returns the sum of a and b
 * @a: fist num
 * @b: second num
 * Return: sum of and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a : first int
 * @b : second int
 * Return: returns answer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a : first int
 * @b : second int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  returns the result of the division of a by b
 * @a : fist num
 * @b : second num
 * Return: prouct of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod -  returns the remainder of the division of a by b
 * @a: first num
 * @b: second num
 * Return: the answer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
