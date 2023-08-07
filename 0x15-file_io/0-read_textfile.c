#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX
 * @filename: name of file
 * @letters: letters to be read and priinted
 * Return: number actual number of letters than can be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buf;

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);

	free(buf);

	close(a);
	return (c);
}

