#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)

{
	int file_descriptor;
	ssize_t written_bytes = 0;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[written_bytes] != '\0')
			written_bytes += write(file_descriptor, text_content + written_bytes, 1);
	}
		close(file_descriptor);
		return (-1);
	}
