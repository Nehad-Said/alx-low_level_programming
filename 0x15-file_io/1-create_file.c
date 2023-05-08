#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: null terminated string to write to the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int filed_to_create, filed_to_write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		length = strlen(text_content);

	filed_to_create = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	filed_to_write = write(filed_to_create, text_content, length);

	if (filed_to_create == -1 || filed_to_write == -1)
		return (-1);

	close(filed_to_create);

	return (1);
}
