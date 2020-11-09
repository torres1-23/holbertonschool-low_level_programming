#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: Pointer to file name.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0, file, byteswrt;

	if (filename)
	{
		while (text_content[len])
			len++;
		file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
		if (file == -1)
			return (-1);
		if (text_content)
		{
			byteswrt = write(file, text_content, len);
			if (byteswrt == -1)
				return (-1);
		}
		close(file);
		return (1);
	}
	return (-1);
}
