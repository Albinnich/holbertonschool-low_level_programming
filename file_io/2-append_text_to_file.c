#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - function that appends text
 * at end of file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 on success and -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int file_descriptor;
	ssize_t written_bytes = 0;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[written_bytes] != '\0')
			written_bytes += write(file_descriptor, text_content + written_bytes, 1);
	}
		close(file_descriptor);
		return (1);
}
