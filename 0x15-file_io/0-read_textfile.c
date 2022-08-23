#include "main.h"

/**
 * read_textfile -  reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the file to read
 * @letters: the num of letters to read
 * Return: the num of lettes succesfully read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num, num2;
	char *buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1 || !filename)
		return (0);

	num = read(fd, buf, letters);
	buf[letters + 1] = '\0';

	num2 = write(1, buf, num);
	close(fd);
	free(buf);
	return (num == num2 ? num : 0);
}
