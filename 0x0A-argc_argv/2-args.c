#include <stdio.h>

/**
 * main - prints the arguments that are givenat terminal
 * @argc : the number of arguments
 * @argv : The arguments array
 * Return: 0 is successes
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
