#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

#define BUFFER_SIZE 1024

/**
 * copy_file - copy the content of first argument to another.
 * print_error - function that prints error
 * main: check the code
 * @message: message to print
 * @code: return code
 */

void print_error(const char *message, int code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	print_error("Error: Can't read from file", 98);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	print_error("Error: Can't write to file", 99);
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)

	if (write(fd_to, buffer, bytes_read) != bytes_read)
	{
	print_error("Error: Can't write to file", 99);
	}
	if (bytes_read == -1)
	print_error("Error: Can't read from file", 98);
	if (close(fd_from) == -1 || close(fd_to) == -1)
	    print_error("Error: Can't close fd", 100);
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	print_error("Usage: cp file_from file_to", 97);
	copy_file(argv[1], argv[2]);

	return (0);
}
