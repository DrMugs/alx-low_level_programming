#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * ck_file - confirms wether file can be opened
 * @fro: original file
 * @to: destination file
 * @arry: the characters
 */
void ck_file(int fro, int to, char *arry[])
{
	if (fro == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arry[1]);

		exit(98);
	}

	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arry[2]);

		exit(99);
	}
}

/**
 * main - main
 * @arg_c: number of chars
 * @arg_v:character matrix
 * Return:0 for sucess
 */
int main(int arg_c, char *arg_v[])
{
	ssize_t num_c, nwr;
	char buffer[1024];
	int to, fro, error_c;

	if (arg_c != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	fro = open(arg_v[1], O_RDONLY);
	to = open(arg_v[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	ck_file(fro, to, arg_v);
	num_c = 1024;
	while (num_c == 1024)
	{
		num_c = read(fro, buffer, 1024);

		if (num_c == -1)
			ck_file(-1, 0, arg_v);
		nwr = write(to, buffer, num_c);

		if (nwr == -1)
			ck_file(0, -1, arg_v);
	}
	error_c = close(fro);

	if (error_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fro);
		exit(100);
	}
	error_c = close(to);
	if (error_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fro);
		exit(100);
	}
	return (0);
}
