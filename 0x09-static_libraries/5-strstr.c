#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack : the string
 * @needle : the string
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				if (haystack[i + 1] == needle[j + 1])
				{
					return (haystack + i);
				}
			}
		}
	}

	return ('\0');
}
