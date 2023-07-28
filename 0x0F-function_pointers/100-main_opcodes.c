#include <stdio.h>
#include <stdlib.h>

/**
 * main - bunch of opcodes
 * @argc: number of elements
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *p = (char *) main;
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < j; i++)
	{
		printf("%02x", p[i] & 0xFF);
		if (i != j - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
