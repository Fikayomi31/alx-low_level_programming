#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: spring to add to the end of the file
 * Return: 1 on success, if function fail or filename is NULL -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;

	if (!filename)
		return (-1);

	while (text_content && text_content[len])
		len++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!len)
		return (1);

	if (write(fd, text_content, len) == -1)
		return (-1);
	close(fd);

	return (1);

}
