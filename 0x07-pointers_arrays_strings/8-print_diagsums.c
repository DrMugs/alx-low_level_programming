#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sums of the two diagonals of sqaure matrix
 * @a : square matrix to be evaluated
 * @size : size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, total = 0, total2 = 0;


	for (i = 0; i < size; i++)
	{
		total += a[(size * i) + i];
		total2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", total, total2);
}
