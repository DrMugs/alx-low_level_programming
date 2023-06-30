#include "main.h"

/**
 * *_strcpy - copies string appointed by src
 * @dest : where we copy to
 * @src : string to ve copies
 */
char *_strcpy(char *dest, char *src)
{
	int count, i;

	count = 0;

	while (src[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
