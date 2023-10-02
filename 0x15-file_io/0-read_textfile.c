#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX
 * @filename : name of file
 * @letters : letters to be read and printed
 * Return: number actual number of letters than can be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_file, r_file, w_file;
	char *hold;

	o_file = open(filename, O_RDONLY);

	if (o_file == -1)
		return (0);

	hold = malloc(sizeof(char) * letters);

	r_file = read(o_file, hold, letters);

	w_file = write(STDOUT_FILENO, hold, r_file);

	free(hold);

	close(o_file);
	return (w_file);
}

