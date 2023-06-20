#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	char aphabet[] = "abcdef";

	for (i = 0; i < 10; i++)
	{

		putchar('0' + i);
	}

	for (j = 0; j < 6; j++)
	{

		putchar(aphabet[i]);
	}

	putchar('\n');
	return (0);

}
