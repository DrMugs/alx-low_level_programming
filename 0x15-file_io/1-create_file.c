#include "main.h"

/**
 * create_file - create file
 * @filename: name of file
 * @text_content : content to be written to the file
 * Return: 1 on success (-1) on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o_file, w_file, i = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (; text_content[i];)
			i++;
	}

	o_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w_file = write(o_file, text_content, i);

	if (o_file == -1 || w_file == -1)
		return (-1);

	close(o_file);
	return (1);
}
