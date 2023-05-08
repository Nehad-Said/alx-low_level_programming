#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filed_to_open, filed_to_write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		length = strlen(text_content);

	filed_to_open = open(filename, O_WRONLY | O_APPEND);
	filed_to_write = write(filed_to_open, text_content, length);

	if (filed_to_open == -1 || filed_to_write == -1)
		return (-1);

	close(filed_to_open);

	return (1);
}
