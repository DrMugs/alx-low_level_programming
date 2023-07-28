#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min : minimum elements
 * @max : maximum elements
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	while (i < (max - min + 1))
	{
		arr[i] = min + i;
		i++;
	}

	return (arr);
}
