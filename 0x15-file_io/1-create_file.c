#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - a function that appends text at the end of a file
 * @filename: is the pointer
 * @text_content: is constant
 * Return: as mentioned
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_count;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
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
