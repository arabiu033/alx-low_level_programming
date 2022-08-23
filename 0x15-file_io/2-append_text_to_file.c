#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success, otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		write_len = write(fd, text_content, strlen(text_content));
	close(fd);
	if (write_len == -1)
		return (-1);

	return (1);
}
