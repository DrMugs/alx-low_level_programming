#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file
 * @text_content: wat is to be added to file
 * Return: 1 on sucess -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o_file, w_file, i = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (; text_content[i];)
			i++;
	}
	o_file = open(filename, O_WRONLY | O_APPEND);

	w_file = write(o_file, text_content, i);

	if (o_file == -1 || w_file == -1)
		return (-1);

	close(o_file);

	return (1);
}
