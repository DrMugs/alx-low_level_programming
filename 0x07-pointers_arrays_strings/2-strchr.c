#include "main.h"

/**
 * _strchr - locates character instring
 * @s : string to be serched
 * @c : character to be searched
 * Return: pointer to the first character occurance
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s[i] == c)
		{
			return (s[i]);
		}
	}

	return (NULL);
}
