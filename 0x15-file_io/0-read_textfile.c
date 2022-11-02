#include "main.h"
/**
 * ssize_t read_textfile - reads atext file and prints it to standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of letter it print else 0 if error occur
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /* file name */
	char *buffer; /* buffer to hold letters */
	ssize_t bytes_read, bytes_written; /* bytes to read and write */

	if (filename == NULL)
		return (0);

	/* file read */
	fd = open(filename, O_RDONLY);
	if (fd == 1)
		return (0);
	/* allocating memory for the letters */
	buffer = malloc(sizeof(char) *letters + 1);
	if (buffer == NULL)
		return (0);

	/* reading the letters from the file */
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);

	/* letter to null letter */
	buffer[letters + 1] = '\0';
	close(fd);

	/* writing the letter to STDOUT FILE */
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1)
		return (0);

	free(buffer);

	return (bytes_read);

}
