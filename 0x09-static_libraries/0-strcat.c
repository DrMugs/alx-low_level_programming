#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int cnt = 0;
	int cnt2 = 0;

	while (*(dest + cnt) != '\0')
	{
		cnt++;
	}

	while (cnt2 >= 0)
	{
		*(dest + cnt) = *(src + cnt2);
		if (*(src + cnt2) == '\0')
			break;
		cnt++;
		cnt2++;
	}
	return (dest);
}
