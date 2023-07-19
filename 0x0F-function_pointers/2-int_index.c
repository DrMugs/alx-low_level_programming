#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array : the array carrying the integers
 * @size : size of array
 * @cmp : function to be called
 * Return: index of integer, -1 if not found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		if (size <= 0)
			return (-1);
		return (-1);
	}
	return (-1);
}
