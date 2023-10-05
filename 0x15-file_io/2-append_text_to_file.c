#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - a function that appends texts at the end of a file
 * @filename: is the pointer
 * @text_content: is the pointer
 * Return: as mentioned
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		write_count = write(fd, text_content, length);
		if (write_count == -1 || write_count != length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
