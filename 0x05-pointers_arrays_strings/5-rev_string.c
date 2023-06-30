#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s : string to be reversed
 */
void rev_string(char *s)
{
	int k, i, j, counter;

	char str;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	
	k = counter - 1;

	for (j = 0; j < counter / 2; j++)
	{
		str = s[j];
		s[j] = s[k];
		s[k--] = str;
	}

}
