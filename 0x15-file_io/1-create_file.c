#include "main.h"

/**
 * create_file - creates fle
 * @filename: name of file
 * @text_content : content to be written to file
 * Return: 1 on success -1 on nfailure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, a, size = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (; text_content[size];)
			size++;
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	a = write(file_d, text_content, size);

	if (file_d == -1 || a == -1)
		return (-1);

	close(file_d);
	return (1);
}
