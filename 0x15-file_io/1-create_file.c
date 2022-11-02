#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: string to write in the file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len])
		len++;
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!len)
		return (1);
	if (write(fd, text_content, len) == -1)
		return (-1);
	close(fd);
	return (1);
}
