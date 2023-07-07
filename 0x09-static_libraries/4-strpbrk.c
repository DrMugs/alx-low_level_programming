#include "main.h"

/**
 * _strpbrk - returnfirst occurecance of string
 * @s : string to be checked
 * @accept : substring to compare
 * Return: pointer to subsequent string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return ('\0');
}
