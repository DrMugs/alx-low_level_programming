#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s : string to be reversed
 */
void rev_string(char *s)
{
	int k, i, j, counter;

	char str[] = '';

	str = s;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}

	for (j = counter - 1; j >= 0; j--)
	{
		s[k] = str[j];
		k++;
	}

}
