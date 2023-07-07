#include "main.h"

/**
 * _strspn - retuns legnth of prefix substring
 * @s : main string
 * @accept : substring
 * Return: number of bytes ininitial substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				counter++;
			}
		}
	}

	return (counter);
}
