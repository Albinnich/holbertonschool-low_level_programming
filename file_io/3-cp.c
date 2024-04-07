#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 *print_error - a function that prints error message
 *
 *@num: exit code
 *@message: the message to be printed
 */

void print_error(int num, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n",  message);
	exit(num);
}

/**
 *_close - a function to close file descriptors
 *@fd: file descriptor to close
 *
 */

void _close(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
	}
}

/**
 *main - function to copy content of a file into another file
 *
 *@argc: number of arrguments
 *@argv: array of arguments
 *
 *Return: Always 0
 */


int main(int argc, char *argv[])
{
	int fd1, fd2, r, w;
	char buffer[BUFFER_SIZE];

	if (argc < 3)
		print_error(97, "Usage: cp file_from file_to");

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	umask(0);

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		r = read(fd1, buffer, BUFFER_SIZE);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(fd2, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	} while (r > 0);

	_close(fd1);
	_close(fd2);
	return (0);
}
