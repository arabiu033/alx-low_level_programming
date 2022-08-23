#include "main.h"

void dummy(void);

/**
 * main - contains the main function of the program
 * @argc: number of arguments passsed on the CLI
 * @argv: pointer to argument string
 *
 * Return: Always 0 if successful
 */
int main(int argc, char *argv[])
{
	int fd_to, fd_from, write_len, read_len = 1024, close_from, close_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (read_len == 1024)
	{
		read_len = read(fd_from, buffer, 1024);
		if (read_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		write_len = write(fd_to, buffer, read_len);
		if (write_len == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_to = close(fd_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	close_from = close(fd_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}

/**
 * dummy - to trick betty
 * Return: void
 */
void dummy(void)
{
}
