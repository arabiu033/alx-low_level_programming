#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to stdout
 * @letters: number of letters it should read and print
 * @filename: the textfile it should read and print from
 *
 * Return: the actual number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int write_len, read_len;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	read_len = read(fd, buf, letters);
	close(fd);
	write_len = write(STDOUT_FILENO, buf, read_len);
	free(buf);
	if (read_len != write_len)
		return (0);
	return (write_len);

}
