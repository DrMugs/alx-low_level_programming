#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1 : string
 * @s2 : second string
 * Return: string created
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, j, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < len1)
		{
			*(s + i) = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			*(s + i) = s2[j];
			i++;
			j++;
		}
	}
	*(s + i) = '\0';

	return (s);
}
