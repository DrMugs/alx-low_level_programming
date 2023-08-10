#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_file -confirms wether file can be opened
 * @file_from: original file
 * @file_to: destination file
 * @arr: the characters
 */
void check_file(int file_from, int file_to, char *arr[])
{
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arr[2]);
		exit(99);
	}

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arr[1]);
		exit(98);
	}
}

/**
 * main - main code
 * @argc: number of chars
 * @argv:character array
 * Return:0 for sucess
 */
int main(int argc, char *argv[])
{
	ssize_t num_c, nwr;
	char buffer[1024];
	int file_to, file_from, error_c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file(file_from, file_to, argv);
	num_c = 1024;
	while (num_c == 1024)
	{
		num_c = read(file_from, buffer, 1024);

		if (num_c == -1)
			check_file(-1, 0, argv);
		nwr = write(file_to, buffer, num_c);

		if (nwr == -1)
			check_file(0, -1, argv);
	}
	error_c = close(file_from);

	if (error_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_c = close(file_to);
	if (error_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
