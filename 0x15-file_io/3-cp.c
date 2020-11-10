#include "holberton.h"

/**
 * main - Entry point, copies the content of a file to another file.
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: 0 in succes.
 */

int main(int ac, char *av[])
{
	int ffrom, fto, bytesrd, byteswr, tmp;
	char *buffer;

	err_argc(ac);
	ffrom = open(av[1], O_RDONLY);
	err_read(ffrom, av[1], NULL);
	fto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 436);
	err_wr(fto, av[2], NULL);
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (-1);
	while ((bytesrd = read(ffrom, buffer, 1024)) != 0)
	{
		err_read(bytesrd, av[1], buffer);
		byteswr = write(fto, buffer, bytesrd);
		err_wr(byteswr, av[2], buffer);
	}
	tmp = close(ffrom);
	err_close(tmp, ffrom, buffer);
	tmp = close(fto);
	err_close(tmp, fto, buffer);
	free(buffer);
	return (0);
}

/**
 * err_argc - Handles number of arguments error.
 * @args: code of error.
 */

void err_argc(int args)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * err_read - handles error from from_file reading.
 * @code: code of error.
 * @str: Name of file.
 * @buffer: Buffer to free.
 */

void err_read(int code, char *str, char *buffer)
{
	if (code == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(98);
	}
}

/**
 * err_wr - handles write error.
 * @code: code of error.
 * @str: name of file.
 * @buffer: buffer to free.
 */

void err_wr(int code, char *str, char *buffer)
{
	if (code == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
	}
}

/**
 * err_close - handles close error.
 * @code: error code.
 * @fd: File descriptor.
 * @buffer: buffer to free.
 */

void err_close(int code, int fd, char *buffer)
{
	if (code == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
}
