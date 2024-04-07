#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 * copier - copy the content of first argument to another.
 *
 * @file_from: source file.
 *
 * @file_to: destination file.
 */

void copier(const char *file_from, const char *file_to)
{
	int fd, fd2, r, w, c;
	char *buf = malloc(BUFFER_SIZE);

	fd2 = open(file_from, O_RDONLY);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	umask(0);
fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((r = read(fd2, buf, BUFFER_SIZE)) > 0)
	{
		w = write(fd, buf, r);
		if (w == -1 || w != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	c = close(fd);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	c = close(fd2);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
	free(buf);
}

/**
 * main - main block.
 *
 * @argc: count of arguments.
 *
 * @argv: argument vector.
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	copier(argv[1], argv[2]);
	return (0);
}
