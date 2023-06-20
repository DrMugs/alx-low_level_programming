#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
  char aphabet[] = "abcdef"

	for (i = 0; i < 10; i++)
	{

		putchar('0' + i);
	}
  for (i = 0; i < 6; i++)
	{

		putchar(aphabet[i]);
	}

	putchar('\n');
	return (0);

}
