#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stad.output.
 * @filename: file name
 * @letters: number of letters
 * Return: actual number of letter or 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t filed_to_open, filed_to_read, filed_to_write;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	filed_to_open = open(filename, O_RDONLY);
	filed_to_read = read(filed_to_open, buf, letters);
	filed_to_write = write(STDOUT_FILENO, buf, filed_to_read);

	if (filed_to_open == -1 || filed_to_write == -1 ||
	filed_to_read == -1 || filed_to_write != filed_to_read)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(filed_to_open);

	return (filed_to_write);
}

