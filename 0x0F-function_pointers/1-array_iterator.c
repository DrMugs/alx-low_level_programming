#include  "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array
 * @array : array to be iterated
 * @size:  size of the arrau
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
		{
			action(*(array + i));
		}
}
