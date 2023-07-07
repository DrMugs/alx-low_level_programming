#include "main.h"
#include <stdio.h>

/**
 * main - printsnumber of aregumnets
 * @argc : number of arguments
 * @argv : the argv
 * Return: 0 (Always success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
