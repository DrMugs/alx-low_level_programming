#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1 : first string
 * @s2 : second string
 * @n : number of bytes
 * Return: the adress to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int count = 0, j = 0, i = 0;

	count = str_counter(s1);
	if (str_counter(s2) < n)
		n = str_counter(s2);
	str = (char *) malloc(sizeof(char) * (n + count));

	if (str == NULL)
		return (NULL);


	while (j < count)
	{
		str[j] = s1[j];
		j++;
	}
	count += n;
	while (j < count)
	{
		str[j] = s2[i];
		j++;
		i++;
	}
	str[j] = '\0';

	return (str);
}

/**
 * str_counter - returns the number of characters
 * @c : the string pointer
 * Return: number of characters
 */
unsigned int str_counter(char *c)
{
	unsigned int x = 0;

	if (!c)
		return (0);
	while (*(c + x))
	{
		x++;
	}
	return (x);
}
