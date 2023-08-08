#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: wat is to be added to file
 * Return: 1 on sucess -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, a, size = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (; text_content[size];)
			size++;
	}
	file_d = open(filename, O_WRONLY | O_APPEND);
	a = write(file_d, text_content, size);

	if (file_d == -1 || a == -1)
		return (-1);

	close(file_d);

	return (1);
}
