#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
  char numbe[] = "";

	for (i = 0; i < 10; i++)
	{

    numbe[i] = i;
		putchar(numbe[i]);
	}

	putchar('\n');
	return (0);

}
