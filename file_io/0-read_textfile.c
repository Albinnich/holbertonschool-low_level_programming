#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - function that reads text file
 * and prints it to POSIX stdout
 * @filename: name of file
 * @letters: number of letters
 * Return: 0 if file can't be opened, written or read
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd;
	ssize_t read_bytes;
	ssize_t write_bytes;
	char *buffer = malloc(letters);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{close(fd);
		return (0);
	}
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || (size_t)write_bytes != (size_t)read_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (write_bytes);
}
