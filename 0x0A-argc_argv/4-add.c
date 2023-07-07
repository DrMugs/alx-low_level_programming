#include <stdio.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: arguments
 * @argv: arguments array
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]))
			sum += (int)*argv[i];
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
